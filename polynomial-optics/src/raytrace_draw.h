#pragma once
#include "spectrum.h"
#include <stdio.h>
#include <strings.h>
#include <cairo.h>

// evalute sensor to outer pupil:
static inline int evaluate_draw(const lens_element_t *lenses, 
                                const int lenses_cnt, 
                                const float zoom, 
                                const float *in, 
                                float *out, 
                                cairo_t *cr, 
                                float scale, 
                                int dim_up, 
                                int draw_aspherical,
                                bool calculate_focal_length,
                                bool draw_focal_length)
{
  int error = 0;
  float n1 = spectrum_eta_from_abbe_um(lenses[lenses_cnt-1].ior, lenses[lenses_cnt-1].vno, in[4]);
  float pos[3], dir[3];
  float intensity = 1.0f;

  planeToCs(in, in + 2, pos, dir, 0);

  cairo_set_source_rgba(cr, 1.0, 1.0, 0.2, 0.7);
  cairo_move_to(cr, pos[2], pos[dim_up]);

  float distsum = 0;

  for(int k=lenses_cnt-1;k>=0;k--)
  {
    // propagate the ray reverse to the plane of intersection optical axis/lens element:
    const float R = -lenses[k].lens_radius; // negative, evaluate() is the adjoint case
    float t = 0.0f;
    const float dist = lens_get_thickness(lenses+k, zoom);
    distsum += dist;

    //normal at intersection
    float n[3];
    
    if(lenses[k].anamorphic)
      error |= cylindrical(pos, dir, &t, R, distsum + R, lenses[k].housing_radius, n, lenses[k].cylinder_axis_y);
    else if(draw_aspherical)
      error |= aspherical(pos, dir, &t, R, distsum + R, lenses[k].aspheric, lenses[k].aspheric_correction_coefficients, lenses[k].housing_radius, n);
    else
      error |= spherical(pos, dir, &t, R, distsum + R, lenses[k].housing_radius, n);

    // index of refraction and ratio current/next:
    const float n2 = k ? spectrum_eta_from_abbe_um(lenses[k-1].ior, lenses[k-1].vno, in[4]) : 1.0f; // outside the lens there is vacuum

    cairo_line_to(cr, pos[2], pos[dim_up]);

    intensity *= refract(n1, n2, n, dir);
    if(intensity < INTENSITY_EPS) error |= 8;

    if(error)
    {
      cairo_save(cr);
      cairo_scale(cr, 1/scale, 1/scale);
      cairo_set_line_width(cr, 1.0f/20.0f);

      cairo_new_path(cr);
      cairo_restore(cr);
      return error;
    }

    raytrace_normalise(dir);

    n1 = n2;
  }

  // return [x,y,dx,dy,lambda]
  csToSphere(pos, dir, out, out + 2, distsum-fabs(lenses[0].lens_radius), lenses[0].lens_radius);
  out[4] = intensity;


  cairo_line_to(cr, pos[2] + dir[2]*1000.0, pos[dim_up] + dir[dim_up]*1000.0);
  cairo_save(cr);
  cairo_scale(cr, 1/scale, 1/scale);
  cairo_set_line_width(cr, 1.0f/20.0f);
  cairo_stroke(cr);
  cairo_restore(cr);


// trying to do the focallength visualisation, this will need to be moved out of this function!!
  if (calculate_focal_length){
    // after last lens element:
    float ray_origin[3] = {pos[0], pos[1], pos[2]};
    float ray_direction[3] = {dir[0], dir[1], dir[2]};
    float pp_line1start[3] = {0.0};
    float pp_line1end[3] = {0.0, 0.0, 99999.0};
    float pp_line2end[3] = {0.0, 0.0, static_cast<float>(pos[2] + (dir[2] * 1000.0))};
    pp_line1start[dim_up] = in[dim_up];
    pp_line1end[dim_up] = in[dim_up];
    pp_line2end[dim_up] = pos[dim_up] + (dir[dim_up] * 1000.0);
    float principlePlaneDistance = lineLineIntersection(pp_line1start, pp_line1end, ray_origin, pp_line2end, dim_up);

    float focalPointLineStart[3] = {0.0};
    float focalPointLineEnd[3] = {0.0, 0.0, 99999.0};
    float focalPointDistance = lineLineIntersection(focalPointLineStart, focalPointLineEnd, ray_origin, pp_line2end, dim_up);
    
    float tracedFocalLength = focalPointDistance - principlePlaneDistance;
    printf("Traced Focal Length = %f\n", tracedFocalLength);
    
    if (draw_focal_length){
      cairo_new_path(cr);
      cairo_set_source_rgba(cr, 0.2, 1.0, 0.2, 1.0);
      cairo_arc(cr, principlePlaneDistance, 0.0, 1, 0, 2 * M_PI);
      cairo_fill(cr);
      
      cairo_new_path(cr);
      cairo_set_source_rgba(cr, 0.2, 1.0, 1.0, 1.0);
      cairo_arc(cr, focalPointDistance, 0.0, 1, 0, 2 * M_PI);
      cairo_fill(cr);

      float max_housing_radius = 70;
      cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 1.0);
      cairo_set_line_width(cr, 0.75);
      cairo_move_to(cr, principlePlaneDistance, max_housing_radius);
      cairo_line_to(cr, principlePlaneDistance + tracedFocalLength, max_housing_radius);
      cairo_stroke(cr);

      cairo_move_to(cr, principlePlaneDistance + tracedFocalLength/2.0, max_housing_radius+5);
      std::string number = "f = ";
      number += std::to_string(tracedFocalLength);
      char const *pchar = number.c_str();
      cairo_set_font_size(cr, 2.5);
      cairo_show_text(cr, pchar);
      cairo_new_path(cr);
      cairo_stroke(cr);
    }
  }


  return error;
}

// evaluate scene to sensor:
static inline int evaluate_reverse_draw(const lens_element_t *lenses, const int lenses_cnt, const float zoom, const float *in, float *out, cairo_t *cr, float scale, int dim_up, int draw_aspherical)
{
  int error = 0;
  float n1 = 1.0f;
  float pos[3] = {0.0f}, dir[3] = {0.0f};
  float intensity = 1.0f;

  float lens_length = 0;
  for(int i=0;i<lenses_cnt;i++) lens_length += lens_get_thickness(lenses+i, zoom);

  sphereToCs(in, in + 2, pos, dir, lens_length - lenses[0].lens_radius, lenses[0].lens_radius);

  // sphere param only knows about directions facing /away/ from outer pupil, so
  // need to flip this if we're tracing into the lens towards the sensor:
  for(int i = 0; i < 3; i++) dir[i] = -dir[i];

  cairo_move_to(cr, pos[2]-100.0*dir[2], pos[dim_up] - 100.0*dir[dim_up]); 
  cairo_line_to(cr, pos[2], pos[dim_up]);

  float distsum = lens_length;

  for(int k=0;k<lenses_cnt;k++)
  {
    const float R = lenses[k].lens_radius;
    float t = 0.0f;
    const float dist = lens_get_thickness(lenses+k, zoom);

    //normal at intersection
    float n[3] = {0.0f};
    
    if(lenses[k].anamorphic){
        error |= cylindrical(pos, dir, &t, R, distsum - R, lenses[k].housing_radius, n, lenses[k].cylinder_axis_y);
    }
    else if(draw_aspherical)
      error |= aspherical(pos, dir, &t, R, distsum - R, lenses[k].aspheric, lenses[k].aspheric_correction_coefficients, lenses[k].housing_radius, n);
    else
      error |= spherical(pos, dir, &t, R, distsum - R, lenses[k].housing_radius, n);

    if(n[2] < 0.0) error |= 16;

    cairo_line_to(cr, pos[2], pos[dim_up]);
    

    // index of refraction and ratio current/next:
    const float n2 = spectrum_eta_from_abbe_um(lenses[k].ior, lenses[k].vno, in[4]);
    intensity *= refract(n1, n2, n, dir);
    if(intensity < INTENSITY_EPS) error |= 8;

    if(error)
    {
      cairo_save(cr);
      cairo_scale(cr, 1/scale, 1/scale);
      cairo_set_line_width(cr, 1.0f/20.0f);
      cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 0.05);
      // cairo_stroke(cr);
      cairo_new_path(cr);
      cairo_restore(cr);
      return error;
    }

    // and renormalise:
    raytrace_normalise(dir);

    distsum -= dist;
    n1 = n2;
  }
  

  cairo_line_to(cr, pos[2], pos[dim_up]);
  cairo_line_to(cr, 0.0f, pos[dim_up] - pos[2]*dir[dim_up]/dir[2]);
  
  // print y=0 intersection
  // printf("pos[dim_up] - pos[2]*dir[dim_up]/dir[2]: %f\n", pos[dim_up] - pos[2]*dir[dim_up]/dir[2]);
  
  cairo_save(cr);
  cairo_scale(cr, 1/scale, 1/scale);

  if(error) cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 0.05);
  else      cairo_set_source_rgba(cr, 0.6, 0.6, 0.6, 3.0f * intensity);
  cairo_stroke(cr);
  cairo_restore(cr);

  // return [x,y,dx,dy,lambda]
  csToPlane(pos, dir, out, out + 2, 0.0f);//0.0==distsum);

  out[4] = intensity;
  
  return error;
}
