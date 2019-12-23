case zeiss__biotar__1927__58mm:
{
//input: scene_[x,y,z] - point in scene, ap_[x,y] - point on aperture
//output: [x,y,dx,dy] point and direction on sensor
Eigen::Vector3d view(
  scene_x,
  scene_y,
  scene_z + camera->lens_outer_pupil_curvature_radius
);
raytrace_normalise(view);
int error = 0;
if(1 || view(2) >= camera->lens_field_of_view)
{
  const double eps = 1e-8;
  double sqr_err = 1e30, sqr_ap_err = 1e30;
  double prev_sqr_err = 1e32, prev_sqr_ap_err = 1e32;
  for(int k=0;k<100&&(sqr_err>eps||sqr_ap_err>eps)&&error==0;k++)
  {
    prev_sqr_err = sqr_err, prev_sqr_ap_err = sqr_ap_err;
    const double begin_x = x;
    const double begin_y = y;
    const double begin_dx = dx;
    const double begin_dy = dy;
    const double begin_lambda = lambda;
    const Eigen::Vector2d pred_ap(
       + 35.1489 *begin_dx + 0.432266 *begin_x + 7.45465 *begin_dx*begin_lambda + 0.173489 *begin_x*begin_lambda + -5.14858 *begin_dx*lens_ipow(begin_lambda, 2) + -22.9437 *begin_dx*lens_ipow(begin_dy, 2) + -22.2915 *lens_ipow(begin_dx, 3) + -0.211488 *begin_y*begin_dx*begin_dy + -0.000830058 *lens_ipow(begin_y, 2)*begin_dx + -0.121485 *begin_x*lens_ipow(begin_lambda, 2) + -0.211797 *begin_x*lens_ipow(begin_dy, 2) + -0.397613 *begin_x*lens_ipow(begin_dx, 2) + -0.00545491 *begin_x*begin_y*begin_dy + -0.000172719 *begin_x*lens_ipow(begin_y, 2) + -0.00322696 *lens_ipow(begin_x, 2)*begin_dx + -0.000118282 *lens_ipow(begin_x, 3) + -0.535554 *begin_y*begin_dx*lens_ipow(begin_dy, 3) + -1.75879e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -0.000571988 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -2.92895e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -2.23348e-05 *lens_ipow(begin_x, 4)*begin_dx + -2.91234e-07 *lens_ipow(begin_x, 5) + 0.0667704 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -1.43404e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dy*lens_ipow(begin_lambda, 2) + -4.16252e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + -1.12545e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4) + -3.82538e-05 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 3)*begin_lambda + 23.5194 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 6),
       + 36.7124 *begin_dy + 0.466997 *begin_y + 1.81549 *begin_dy*begin_lambda + 0.040883 *begin_y*begin_lambda + -22.9376 *lens_ipow(begin_dy, 3) + -23.3952 *lens_ipow(begin_dx, 2)*begin_dy + -0.416494 *begin_y*lens_ipow(begin_dy, 2) + -0.204649 *begin_y*lens_ipow(begin_dx, 2) + -0.00469986 *lens_ipow(begin_y, 2)*begin_dy + -0.000128385 *lens_ipow(begin_y, 3) + -0.00114048 *lens_ipow(begin_x, 2)*begin_dy + -0.000127148 *lens_ipow(begin_x, 2)*begin_y + -0.602487 *begin_x*begin_dx*begin_dy*begin_lambda + -0.014519 *begin_x*begin_y*begin_dx*begin_lambda + 0.0165266 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + -1.32635e-05 *lens_ipow(begin_y, 4)*begin_dy + -2.40237e-07 *lens_ipow(begin_y, 5) + 0.036497 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + 0.0233551 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_dy + -1.62499e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + -5.18445e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 0.000354216 *lens_ipow(begin_x, 3)*begin_dx*begin_dy + -2.16555e-07 *lens_ipow(begin_x, 4)*begin_y + 0.0211471 *begin_x*begin_y*begin_dx*lens_ipow(begin_lambda, 3) + -1.97264e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dx*begin_lambda + -1.38489e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dx*begin_lambda + 0.859791 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 4) + 0.00557656 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 6)
    );
    const Eigen::Vector2d delta_ap(ap_x - pred_ap[0], ap_y - pred_ap[1]);
    sqr_ap_err = delta_ap[0]*delta_ap[0]+delta_ap[1]*delta_ap[1];
    Eigen::Matrix2d dx1_domega0;
    dx1_domega0(0, 0) =  + 35.1489  + 7.45465 *begin_lambda + -5.14858 *lens_ipow(begin_lambda, 2) + -22.9437 *lens_ipow(begin_dy, 2) + -66.8746 *lens_ipow(begin_dx, 2) + -0.211488 *begin_y*begin_dy + -0.000830058 *lens_ipow(begin_y, 2) + -0.795227 *begin_x*begin_dx + -0.00322696 *lens_ipow(begin_x, 2) + -0.535554 *begin_y*lens_ipow(begin_dy, 3) + -1.75879e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -0.00114398 *lens_ipow(begin_x, 3)*begin_dx + -2.23348e-05 *lens_ipow(begin_x, 4) + 0.133541 *begin_x*begin_y*begin_dx*begin_dy*begin_lambda + -0.000114761 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2)*begin_lambda + 47.0388 *begin_x*begin_dx*lens_ipow(begin_dy, 6)+0.0f;
    dx1_domega0(0, 1) =  + -45.8874 *begin_dx*begin_dy + -0.211488 *begin_y*begin_dx + -0.423595 *begin_x*begin_dy + -0.00545491 *begin_x*begin_y + -1.60666 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + 0.0667704 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -1.43404e-05 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_lambda, 2) + -4.16252e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3) + 141.116 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 5)+0.0f;
    dx1_domega0(1, 0) =  + -46.7904 *begin_dx*begin_dy + -0.409297 *begin_y*begin_dx + -0.602487 *begin_x*begin_dy*begin_lambda + -0.014519 *begin_x*begin_y*begin_lambda + 0.036497 *begin_x*begin_y*lens_ipow(begin_dy, 2) + 0.0467102 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + 0.000354216 *lens_ipow(begin_x, 3)*begin_dy + 0.0211471 *begin_x*begin_y*lens_ipow(begin_lambda, 3) + -1.97264e-05 *begin_x*lens_ipow(begin_y, 3)*begin_lambda + -1.38489e-05 *lens_ipow(begin_x, 3)*begin_y*begin_lambda + 0.859791 *begin_x*begin_dy*lens_ipow(begin_lambda, 4)+0.0f;
    dx1_domega0(1, 1) =  + 36.7124  + 1.81549 *begin_lambda + -68.8127 *lens_ipow(begin_dy, 2) + -23.3952 *lens_ipow(begin_dx, 2) + -0.832988 *begin_y*begin_dy + -0.00469986 *lens_ipow(begin_y, 2) + -0.00114048 *lens_ipow(begin_x, 2) + -0.602487 *begin_x*begin_dx*begin_lambda + 0.0495798 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -1.32635e-05 *lens_ipow(begin_y, 4) + 0.072994 *begin_x*begin_y*begin_dx*begin_dy + 0.0233551 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -1.62499e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 0.000354216 *lens_ipow(begin_x, 3)*begin_dx + 0.859791 *begin_x*begin_dx*lens_ipow(begin_lambda, 4) + 0.0334593 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 5)+0.0f;
    Eigen::Matrix2d invApJ;
    const double invdetap = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
    invApJ(0, 0) =  dx1_domega0(1, 1)*invdetap;
    invApJ(1, 1) =  dx1_domega0(0, 0)*invdetap;
    invApJ(0, 1) = -dx1_domega0(0, 1)*invdetap;
    invApJ(1, 0) = -dx1_domega0(1, 0)*invdetap;
    for(int i=0;i<2;i++)
    {
      dx += invApJ(0, i)*delta_ap[i];
      dy += invApJ(1, i)*delta_ap[i];
    }
    out(0) =  + 57.8836 *begin_dx + 0.216995 *begin_x + -22.4452 *begin_dx*lens_ipow(begin_dy, 2) + -22.0788 *lens_ipow(begin_dx, 3) + 0.468049 *begin_y*begin_dx*begin_dy + 0.00946094 *lens_ipow(begin_y, 2)*begin_dx + 0.747064 *begin_x*lens_ipow(begin_dy, 2) + 0.724429 *begin_x*lens_ipow(begin_dx, 2) + 0.0248833 *begin_x*begin_y*begin_dy + -0.000286335 *lens_ipow(begin_x, 3) + 0.900938 *begin_x*lens_ipow(begin_dx, 2)*begin_lambda + 0.060704 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 0.0401442 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -8.78612e-06 *lens_ipow(begin_y, 4)*begin_dx + 0.0258419 *begin_x*begin_y*lens_ipow(begin_dy, 3) + 0.105271 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -5.49865e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dy + -8.98589e-07 *begin_x*lens_ipow(begin_y, 4) + 0.0338703 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + 0.000921186 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 2) + -5.55245e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dy + -1.84013e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -4.09304e-07 *lens_ipow(begin_x, 5) + 0.125955 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*begin_lambda + -0.00023695 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*begin_lambda + 0.000183838 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.000198741 *lens_ipow(begin_x, 4)*begin_dx*lens_ipow(begin_lambda, 2) + -4.52353e-06 *lens_ipow(begin_x, 5)*lens_ipow(begin_lambda, 4);
    out(1) =  + 57.7837 *begin_dy + 0.180428 *begin_y + 0.0666385 *begin_y*begin_lambda + -22.2611 *lens_ipow(begin_dy, 3) + -21.062 *lens_ipow(begin_dx, 2)*begin_dy + 0.774109 *begin_y*lens_ipow(begin_dx, 2) + 0.513103 *begin_x*begin_dx*begin_dy + 0.0251013 *begin_x*begin_y*begin_dx + 0.0110586 *lens_ipow(begin_x, 2)*begin_dy + 2.66025 *begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 0.0694739 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.0398798 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -9.08804e-07 *lens_ipow(begin_y, 5) + 0.0347331 *begin_x*begin_y*lens_ipow(begin_dx, 3) + -5.38321e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dx + -1.78561e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -0.00117766 *lens_ipow(begin_x, 3)*begin_dx*begin_dy + -6.14185e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dx + -1.94701e-05 *lens_ipow(begin_x, 4)*begin_dy + -9.87062e-07 *lens_ipow(begin_x, 4)*begin_y + 0.166306 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -0.000149803 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy*begin_lambda + -0.000328406 *lens_ipow(begin_y, 4)*begin_dy*lens_ipow(begin_lambda, 2) + -3.88988 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5) + 0.953519 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 3) + -1.62921 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 5) + 7.89134e-07 *lens_ipow(begin_y, 6)*begin_dy*lens_ipow(begin_lambda, 4) + -2.22017e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 4);
    out(2) =  + -1.1998 *begin_dx + -0.0220985 *begin_x + 0.609686 *lens_ipow(begin_dx, 3) + -0.0123531 *begin_y*begin_dx*begin_dy + 6.1856e-05 *lens_ipow(begin_y, 2)*begin_dx + -0.000227015 *begin_x*begin_y*begin_dy + 9.81594e-06 *begin_x*lens_ipow(begin_y, 2) + 1.03461e-05 *lens_ipow(begin_x, 3) + -0.383611 *begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -0.0499982 *begin_x*lens_ipow(begin_dy, 2)*begin_lambda + -4.36029e-06 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + -3.82615e-06 *lens_ipow(begin_x, 3)*begin_lambda + -0.000796866 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + 0.0425018 *begin_x*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -0.0414607 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.00213636 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -1.6654e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.00144111 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + -1.41619e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2) + -0.000883438 *begin_x*begin_y*lens_ipow(begin_dy, 3)*begin_lambda + 2.66853e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + 4.1789e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dx + 6.02747e-11 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2) + -0.000265236 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 4)*begin_lambda + -1.2949e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 37.4523 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 4)*lens_ipow(begin_lambda, 2) + 1.00061e-13 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 6) + 46.4259 *begin_dx*lens_ipow(begin_dy, 8)*lens_ipow(begin_lambda, 2);
    out(3) =  + -1.1905 *begin_dy + -0.0213552 *begin_y + -0.000953858 *begin_y*begin_lambda + 0.44533 *lens_ipow(begin_dy, 3) + 1.25857 *lens_ipow(begin_dx, 2)*begin_dy + -0.00562527 *begin_y*lens_ipow(begin_dy, 2) + -0.000137513 *lens_ipow(begin_y, 2)*begin_dy + 5.57975e-06 *lens_ipow(begin_y, 3) + 0.0250628 *begin_x*begin_dx*begin_dy + -7.86144e-05 *begin_x*begin_y*begin_dx + 0.00016592 *lens_ipow(begin_x, 2)*begin_dy + 6.4795e-06 *lens_ipow(begin_x, 2)*begin_y + -0.0316259 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + 0.663754 *lens_ipow(begin_dy, 5) + 2.16867 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 0.0323894 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.000867966 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + 5.74335e-07 *lens_ipow(begin_y, 4)*begin_dy + 8.95372e-09 *lens_ipow(begin_y, 5) + 0.0441461 *begin_x*begin_dx*lens_ipow(begin_dy, 3) + 0.000392505 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + 3.46888e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + 1.29579e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 7.37512e-09 *lens_ipow(begin_x, 4)*begin_y + 0.091903 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -3.06804e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*begin_lambda + -0.00184302 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_lambda + -5.93801e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*begin_lambda;
    Eigen::Vector3d pred_out_cs_pos(0,0,0);
    Eigen::Vector3d pred_out_cs_dir(0,0,0);
    Eigen::Vector2d outpos(out(0), out(1));
    Eigen::Vector2d outdir(out(2), out(3));
    if (camera->lens_outer_pupil_geometry == "cyl-y") cylinderToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, true);
    else if (camera->lens_outer_pupil_geometry == "cyl-x") cylinderToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, false);
    else sphereToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius);
    Eigen::Vector3d view(
      scene_x - pred_out_cs_pos(0),
      scene_y - pred_out_cs_pos(1),
      scene_z - pred_out_cs_pos(2)
    );
    raytrace_normalise(view);
    Eigen::VectorXd out_new(5); out_new.setZero();
    Eigen::Vector2d out_new_pos(0,0);
    Eigen::Vector2d out_new_dir(0,0);
    if (camera->lens_outer_pupil_geometry == "cyl-y") csToCylinder(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, true);
    else if (camera->lens_outer_pupil_geometry == "cyl-x") csToCylinder(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, false);
    else csToSphere(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius);
    out_new(0) = out_new_pos(0);
    out_new(1) = out_new_pos(1);
    out_new(2) = out_new_dir(0);
    out_new(3) = out_new_dir(1);
    const Eigen::Vector2d delta_out(out_new[2] - out[2], out_new[3] - out[3]);
    sqr_err = delta_out[0]*delta_out[0]+delta_out[1]*delta_out[1];
    Eigen::Matrix2d domega2_dx0;
    domega2_dx0(0, 0) =  + -0.0220985  + -0.000227015 *begin_y*begin_dy + 9.81594e-06 *lens_ipow(begin_y, 2) + 3.10382e-05 *lens_ipow(begin_x, 2) + -0.0499982 *lens_ipow(begin_dy, 2)*begin_lambda + -4.36029e-06 *lens_ipow(begin_y, 2)*begin_lambda + -1.14784e-05 *lens_ipow(begin_x, 2)*begin_lambda + 0.0425018 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -0.0414607 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.00213636 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + -1.6654e-05 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.00288221 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + -4.24858e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.000883438 *begin_y*lens_ipow(begin_dy, 3)*begin_lambda + 8.00558e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dy + 1.67156e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx + 3.01373e-10 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2) + -0.000265236 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 4)*begin_lambda + -2.5898e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 3.00184e-13 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 6)+0.0f;
    domega2_dx0(0, 1) =  + -0.0123531 *begin_dx*begin_dy + 0.000123712 *begin_y*begin_dx + -0.000227015 *begin_x*begin_dy + 1.96319e-05 *begin_x*begin_y + -8.72059e-06 *begin_x*begin_y*begin_lambda + -0.00159373 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.00213636 *begin_x*lens_ipow(begin_dx, 2)*begin_dy + -3.3308e-05 *begin_x*begin_y*lens_ipow(begin_dx, 2) + -0.000883438 *begin_x*lens_ipow(begin_dy, 3)*begin_lambda + 8.00558e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dy + 8.35781e-09 *lens_ipow(begin_x, 4)*begin_y*begin_dx + 1.20549e-10 *lens_ipow(begin_x, 5)*begin_y + -0.000530473 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_lambda + -2.5898e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 3)*begin_lambda + 6.00368e-13 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)+0.0f;
    domega2_dx0(1, 0) =  + 0.0250628 *begin_dx*begin_dy + -7.86144e-05 *begin_y*begin_dx + 0.000331839 *begin_x*begin_dy + 1.2959e-05 *begin_x*begin_y + 0.0441461 *begin_dx*lens_ipow(begin_dy, 3) + 0.00078501 *begin_x*lens_ipow(begin_dy, 3) + 6.93776e-07 *begin_x*lens_ipow(begin_y, 2)*begin_dy + 2.59159e-08 *begin_x*lens_ipow(begin_y, 3) + 2.95005e-08 *lens_ipow(begin_x, 3)*begin_y + -0.00184302 *begin_y*lens_ipow(begin_dx, 3)*begin_lambda + -0.00011876 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_lambda+0.0f;
    domega2_dx0(1, 1) =  + -0.0213552  + -0.000953858 *begin_lambda + -0.00562527 *lens_ipow(begin_dy, 2) + -0.000275027 *begin_y*begin_dy + 1.67392e-05 *lens_ipow(begin_y, 2) + -7.86144e-05 *begin_x*begin_dx + 6.4795e-06 *lens_ipow(begin_x, 2) + -0.0316259 *lens_ipow(begin_dx, 2)*begin_lambda + 0.0323894 *lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.00173593 *begin_y*lens_ipow(begin_dy, 3) + 2.29734e-06 *lens_ipow(begin_y, 3)*begin_dy + 4.47686e-08 *lens_ipow(begin_y, 4) + 6.93776e-07 *lens_ipow(begin_x, 2)*begin_y*begin_dy + 3.88738e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 7.37512e-09 *lens_ipow(begin_x, 4) + 0.091903 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -9.20413e-05 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -0.00184302 *begin_x*lens_ipow(begin_dx, 3)*begin_lambda + -5.93801e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_lambda+0.0f;
    Eigen::Matrix2d invJ;
    const double invdet = 1.0f/(domega2_dx0(0, 0)*domega2_dx0(1, 1) - domega2_dx0(0, 1)*domega2_dx0(1, 0));
    invJ(0, 0) =  domega2_dx0(1, 1)*invdet;
    invJ(1, 1) =  domega2_dx0(0, 0)*invdet;
    invJ(0, 1) = -domega2_dx0(0, 1)*invdet;
    invJ(1, 0) = -domega2_dx0(1, 0)*invdet;
    for(int i=0;i<2;i++)
    {
      x += 0.72 * invJ(0, i) * delta_out[i];
      y += 0.72 * invJ(1, i) * delta_out[i];
    }
    if(sqr_err>prev_sqr_err) error |= 1;
    if(sqr_ap_err>prev_sqr_ap_err) error |= 2;
    if(out[0]!=out[0]) error |= 4;
    if(out[1]!=out[1]) error |= 8;
    // reset error code for first few iterations.
    if(k<10) error = 0;
  }
}
else
  error = 128;
if(out[0]*out[0]+out[1]*out[1] > camera->lens_outer_pupil_radius*camera->lens_outer_pupil_radius) error |= 16;
const double begin_x = x;
const double begin_y = y;
const double begin_dx = dx;
const double begin_dy = dy;
const double begin_lambda = lambda;
if(error==0)
  out[4] =  + 0.444879  + 0.703543 *begin_lambda + -0.969112 *lens_ipow(begin_lambda, 2) + 0.470111 *lens_ipow(begin_lambda, 3) + -0.775357 *lens_ipow(begin_dy, 4) + -1.81799 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.736146 *lens_ipow(begin_dx, 4) + -0.0526484 *begin_y*lens_ipow(begin_dy, 3) + -0.00147502 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -1.81661e-05 *lens_ipow(begin_y, 3)*begin_dy + -9.32528e-08 *lens_ipow(begin_y, 4) + -0.0522876 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + -0.000714165 *begin_x*begin_y*begin_dx*begin_dy + -0.000536531 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -1.87598e-05 *lens_ipow(begin_x, 2)*begin_y*begin_dy + -2.28541e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -1.55822e-05 *lens_ipow(begin_x, 3)*begin_dx + -0.0910372 *begin_y*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -0.000887901 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -0.0970086 *begin_x*lens_ipow(begin_dx, 3)*begin_lambda + -0.00212115 *begin_x*begin_y*begin_dx*begin_dy*begin_lambda + -3.28219e-05 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_lambda + -0.0028025 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -1.14688 *lens_ipow(begin_dy, 6) + -3.64076e-10 *lens_ipow(begin_x, 6) + -4.29208 *lens_ipow(begin_dx, 6)*lens_ipow(begin_lambda, 2) + -8.13116e-08 *lens_ipow(begin_x, 5)*begin_dx*lens_ipow(begin_lambda, 3) + -109.343 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4)*lens_ipow(begin_lambda, 2);
else
  out[4] = 0.0f;
} break;
