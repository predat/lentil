case nikon__unknown__2014__40mm:
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
       + 25.7302 *begin_dx + 0.293882 *begin_x + 6.58463 *begin_dx*begin_lambda + 0.235593 *begin_x*begin_lambda + -4.54122 *begin_dx*lens_ipow(begin_lambda, 2) + -12.8642 *begin_dx*lens_ipow(begin_dy, 2) + -12.7559 *lens_ipow(begin_dx, 3) + 0.00207335 *lens_ipow(begin_y, 2)*begin_dx + -0.172285 *begin_x*lens_ipow(begin_lambda, 2) + -0.0859977 *begin_x*lens_ipow(begin_dy, 2) + -0.142121 *begin_x*lens_ipow(begin_dx, 2) + 0.00187845 *begin_x*begin_y*begin_dy + -0.000250022 *begin_x*lens_ipow(begin_y, 2) + 0.00353244 *lens_ipow(begin_x, 2)*begin_dx + -0.000206067 *lens_ipow(begin_x, 3) + 0.000110974 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + -0.345645 *begin_y*begin_dx*lens_ipow(begin_dy, 3) + -0.438949 *begin_y*lens_ipow(begin_dx, 3)*begin_dy + -0.012105 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + -4.19305e-07 *begin_x*lens_ipow(begin_y, 4) + -0.0204557 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + -0.010444 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3) + -7.81489e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -5.94993e-07 *lens_ipow(begin_x, 5) + 4.89429e-07 *lens_ipow(begin_x, 5)*begin_lambda + -0.0688526 *begin_x*begin_y*lens_ipow(begin_dy, 5) + -2.12791e-10 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + 1.57789e-10 *lens_ipow(begin_x, 8)*begin_dx*lens_ipow(begin_lambda, 2),
       + 25.8075 *begin_dy + 0.29468 *begin_y + 6.44578 *begin_dy*begin_lambda + 0.235435 *begin_y*begin_lambda + -4.47832 *begin_dy*lens_ipow(begin_lambda, 2) + -12.9744 *lens_ipow(begin_dy, 3) + -12.8068 *lens_ipow(begin_dx, 2)*begin_dy + -0.171039 *begin_y*lens_ipow(begin_lambda, 2) + -0.160455 *begin_y*lens_ipow(begin_dy, 2) + -0.000317019 *lens_ipow(begin_y, 3) + 0.00186033 *begin_x*begin_y*begin_dx + 0.00201847 *lens_ipow(begin_x, 2)*begin_dy + -0.000243015 *lens_ipow(begin_x, 2)*begin_y + -0.153224 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + 0.00369536 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.000126257 *lens_ipow(begin_y, 3)*begin_lambda + 9.78775e-05 *lens_ipow(begin_x, 2)*begin_y*begin_lambda + 0.000521245 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 1.41458e-05 *lens_ipow(begin_y, 4)*begin_dy + -0.459062 *begin_x*begin_dx*lens_ipow(begin_dy, 3) + -0.295035 *begin_x*lens_ipow(begin_dx, 3)*begin_dy + -0.0117382 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + -7.95867e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -4.10607e-07 *lens_ipow(begin_x, 4)*begin_y + -0.0368216 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -6.48573e-10 *lens_ipow(begin_y, 7) + -0.202996 *begin_x*begin_y*lens_ipow(begin_dx, 5)*lens_ipow(begin_lambda, 2) + -3.54037e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4)*begin_dx*begin_dy
    );
    const Eigen::Vector2d delta_ap(ap_x - pred_ap[0], ap_y - pred_ap[1]);
    sqr_ap_err = delta_ap[0]*delta_ap[0]+delta_ap[1]*delta_ap[1];
    Eigen::Matrix2d dx1_domega0;
    dx1_domega0(0, 0) =  + 25.7302  + 6.58463 *begin_lambda + -4.54122 *lens_ipow(begin_lambda, 2) + -12.8642 *lens_ipow(begin_dy, 2) + -38.2676 *lens_ipow(begin_dx, 2) + 0.00207335 *lens_ipow(begin_y, 2) + -0.284241 *begin_x*begin_dx + 0.00353244 *lens_ipow(begin_x, 2) + -0.345645 *begin_y*lens_ipow(begin_dy, 3) + -1.31685 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + -0.0363151 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.0204557 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.0313321 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -2.12791e-10 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dy + 1.57789e-10 *lens_ipow(begin_x, 8)*lens_ipow(begin_lambda, 2)+0.0f;
    dx1_domega0(0, 1) =  + -25.7285 *begin_dx*begin_dy + -0.171995 *begin_x*begin_dy + 0.00187845 *begin_x*begin_y + -1.03693 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.438949 *begin_y*lens_ipow(begin_dx, 3) + -0.0409114 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + -0.344263 *begin_x*begin_y*lens_ipow(begin_dy, 4) + -2.12791e-10 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx+0.0f;
    dx1_domega0(1, 0) =  + -25.6136 *begin_dx*begin_dy + 0.00186033 *begin_x*begin_y + -0.306448 *begin_y*begin_dx*begin_lambda + -0.459062 *begin_x*lens_ipow(begin_dy, 3) + -0.885106 *begin_x*lens_ipow(begin_dx, 2)*begin_dy + -0.0736432 *lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda + -1.01498 *begin_x*begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_lambda, 2) + -3.54037e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4)*begin_dy+0.0f;
    dx1_domega0(1, 1) =  + 25.8075  + 6.44578 *begin_lambda + -4.47832 *lens_ipow(begin_lambda, 2) + -38.9232 *lens_ipow(begin_dy, 2) + -12.8068 *lens_ipow(begin_dx, 2) + -0.320909 *begin_y*begin_dy + 0.00201847 *lens_ipow(begin_x, 2) + 0.00369536 *lens_ipow(begin_y, 2)*begin_lambda + 0.00104249 *lens_ipow(begin_y, 3)*begin_dy + 1.41458e-05 *lens_ipow(begin_y, 4) + -1.37719 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + -0.295035 *begin_x*lens_ipow(begin_dx, 3) + -0.0352147 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.0368216 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -3.54037e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4)*begin_dx+0.0f;
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
    out(0) =  + 39.8922 *begin_dx + -0.224477 *begin_x + 0.713132 *begin_dx*begin_lambda + 0.440636 *begin_x*begin_lambda + -16.3693 *begin_dx*lens_ipow(begin_dy, 2) + -18.4148 *lens_ipow(begin_dx, 3) + 0.00580314 *lens_ipow(begin_y, 2)*begin_dx + -0.318652 *begin_x*lens_ipow(begin_lambda, 2) + 0.273237 *begin_x*lens_ipow(begin_dy, 2) + 0.315266 *begin_x*lens_ipow(begin_dx, 2) + 0.0111227 *begin_x*begin_y*begin_dy + -0.000528349 *begin_x*lens_ipow(begin_y, 2) + 0.0172566 *lens_ipow(begin_x, 2)*begin_dx + -0.000569927 *lens_ipow(begin_x, 3) + 14.0331 *lens_ipow(begin_dx, 5) + 0.000455486 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2) + -2.66166e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 2.49969e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + 2.8573e-08 *lens_ipow(begin_y, 6)*begin_dx + 0.00376756 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 4) + -4.01218e-09 *begin_x*lens_ipow(begin_y, 6) + -3.68078e-09 *lens_ipow(begin_x, 7) + 2.96208e-09 *lens_ipow(begin_x, 7)*begin_lambda + 2151.02 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 4) + -7.29534e-08 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + -1.75833e-11 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 4) + 1.0073e-11 *begin_x*lens_ipow(begin_y, 8)*begin_lambda + -1.75541e-10 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2);
    out(1) =  + 39.8663 *begin_dy + -0.208809 *begin_y + 0.763325 *begin_dy*begin_lambda + 0.415465 *begin_y*begin_lambda + -17.3787 *lens_ipow(begin_dy, 3) + -16.4877 *lens_ipow(begin_dx, 2)*begin_dy + -0.321879 *begin_y*lens_ipow(begin_lambda, 2) + 0.314293 *begin_y*lens_ipow(begin_dy, 2) + 0.273129 *begin_y*lens_ipow(begin_dx, 2) + 0.0171395 *lens_ipow(begin_y, 2)*begin_dy + -0.000754869 *lens_ipow(begin_y, 3) + 0.0111455 *begin_x*begin_y*begin_dx + -0.00076105 *lens_ipow(begin_x, 2)*begin_y + 0.000316945 *lens_ipow(begin_y, 3)*begin_lambda + 0.0193604 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 0.000326708 *lens_ipow(begin_x, 2)*begin_y*begin_lambda + 0.000449 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + -0.0184855 *lens_ipow(begin_x, 2)*begin_dy*lens_ipow(begin_lambda, 2) + 9.16485e-06 *lens_ipow(begin_x, 4)*begin_dy + 48.6576 *lens_ipow(begin_dy, 7) + -1.9369e-09 *lens_ipow(begin_y, 7) + 0.00368453 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 4) + -4.87406e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 5) + -8.0187e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + -5.45706e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3) + -1.64546e-09 *lens_ipow(begin_x, 6)*begin_y + 2293.53 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 5) + -3.19886e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 2);
    out(2) =  + -0.654993 *begin_dx + -0.0234753 *begin_x + 0.352533 *lens_ipow(begin_dx, 3) + 0.00273822 *begin_y*begin_dx*begin_dy + 6.8844e-05 *lens_ipow(begin_y, 2)*begin_dx + -0.00315627 *begin_x*lens_ipow(begin_dy, 2) + 0.0029825 *begin_x*lens_ipow(begin_dx, 2) + -0.000177841 *begin_x*begin_y*begin_dy + 2.71062e-05 *begin_x*lens_ipow(begin_y, 2) + -0.000106765 *lens_ipow(begin_x, 2)*begin_dx + 1.97028e-05 *lens_ipow(begin_x, 3) + 0.843587 *begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -4.68395e-05 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + -1.48521e-05 *lens_ipow(begin_x, 3)*begin_lambda + -0.701828 *begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 0.000371743 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 3.52393e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -8.6883e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2) + 2.75558e-11 *begin_x*lens_ipow(begin_y, 6) + 9.86828e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4) + 1.8964e-07 *lens_ipow(begin_x, 4)*begin_y*begin_dx*begin_dy + 1.0311e-10 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2) + 6.52965e-11 *lens_ipow(begin_x, 7) + 8.18852e-08 *begin_x*lens_ipow(begin_y, 4)*lens_ipow(begin_dy, 2)*begin_lambda + 6.20373e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_lambda, 3) + -1.24873e-10 *lens_ipow(begin_x, 7)*begin_lambda + 9.94636e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 5)*begin_dx*begin_dy + -5.16512e-12 *lens_ipow(begin_x, 8)*begin_dx;
    out(3) =  + -0.653677 *begin_dy + -0.0234866 *begin_y + 0.340172 *lens_ipow(begin_dy, 3) + 0.472643 *lens_ipow(begin_dx, 2)*begin_dy + 0.00263039 *begin_y*lens_ipow(begin_dy, 2) + -0.000100519 *lens_ipow(begin_y, 2)*begin_dy + 2.55701e-05 *lens_ipow(begin_y, 3) + 0.0106999 *begin_x*begin_dx*begin_dy + -0.000197824 *begin_x*begin_y*begin_dx + 2.27277e-05 *lens_ipow(begin_x, 2)*begin_y + -0.00674076 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -3.83722e-05 *lens_ipow(begin_y, 3)*begin_lambda + 5.57678e-05 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + -3.52006e-05 *lens_ipow(begin_x, 2)*begin_y*begin_lambda + 2.66173e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 2) + 0.000481376 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + 2.49933e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_lambda, 2) + 1.63045e-08 *lens_ipow(begin_x, 4)*begin_y + -0.000469661 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -1.55653e-09 *lens_ipow(begin_y, 6)*begin_dy + 2.1428e-11 *lens_ipow(begin_y, 7) + -9.7339e-06 *begin_x*lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 2) + 1.45801e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 5) + -4.04468e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dy + 0.00100148 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 3) + -2.24071e-11 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 3)*begin_dx + -0.000702572 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 5) + -1.011e-06 *lens_ipow(begin_y, 5)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*begin_lambda;
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
    domega2_dx0(0, 0) =  + -0.0234753  + -0.00315627 *lens_ipow(begin_dy, 2) + 0.0029825 *lens_ipow(begin_dx, 2) + -0.000177841 *begin_y*begin_dy + 2.71062e-05 *lens_ipow(begin_y, 2) + -0.000213529 *begin_x*begin_dx + 5.91083e-05 *lens_ipow(begin_x, 2) + -4.68395e-05 *lens_ipow(begin_y, 2)*begin_lambda + -4.45564e-05 *lens_ipow(begin_x, 2)*begin_lambda + 3.52393e-05 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -2.60649e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + 2.75558e-11 *lens_ipow(begin_y, 6) + 2.96048e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4) + 7.58559e-07 *lens_ipow(begin_x, 3)*begin_y*begin_dx*begin_dy + 5.15549e-10 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2) + 4.57075e-10 *lens_ipow(begin_x, 6) + 8.18852e-08 *lens_ipow(begin_y, 4)*lens_ipow(begin_dy, 2)*begin_lambda + 3.10186e-07 *lens_ipow(begin_x, 4)*lens_ipow(begin_lambda, 3) + -8.74112e-10 *lens_ipow(begin_x, 6)*begin_lambda + 1.98927e-09 *begin_x*lens_ipow(begin_y, 5)*begin_dx*begin_dy + -4.1321e-11 *lens_ipow(begin_x, 7)*begin_dx+0.0f;
    domega2_dx0(0, 1) =  + 0.00273822 *begin_dx*begin_dy + 0.000137688 *begin_y*begin_dx + -0.000177841 *begin_x*begin_dy + 5.42123e-05 *begin_x*begin_y + -9.36791e-05 *begin_x*begin_y*begin_lambda + 0.000743485 *begin_y*lens_ipow(begin_dx, 3) + 7.04787e-05 *begin_x*begin_y*lens_ipow(begin_lambda, 2) + 1.65335e-10 *begin_x*lens_ipow(begin_y, 5) + 3.94731e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3) + 1.8964e-07 *lens_ipow(begin_x, 4)*begin_dx*begin_dy + 2.0622e-10 *lens_ipow(begin_x, 5)*begin_y + 3.27541e-07 *begin_x*lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*begin_lambda + 4.97318e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dx*begin_dy+0.0f;
    domega2_dx0(1, 0) =  + 0.0106999 *begin_dx*begin_dy + -0.000197824 *begin_y*begin_dx + 4.54554e-05 *begin_x*begin_y + 0.000111536 *begin_x*begin_dy*begin_lambda + -7.04011e-05 *begin_x*begin_y*begin_lambda + 0.000962752 *begin_x*lens_ipow(begin_dy, 3) + 4.99866e-05 *begin_x*begin_y*lens_ipow(begin_lambda, 2) + 6.5218e-08 *lens_ipow(begin_x, 3)*begin_y + -9.7339e-06 *lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 2) + 2.91602e-10 *begin_x*lens_ipow(begin_y, 5) + -1.61787e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dy + -1.12036e-10 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3)*begin_dx+0.0f;
    domega2_dx0(1, 1) =  + -0.0234866  + 0.00263039 *lens_ipow(begin_dy, 2) + -0.000201038 *begin_y*begin_dy + 7.67104e-05 *lens_ipow(begin_y, 2) + -0.000197824 *begin_x*begin_dx + 2.27277e-05 *lens_ipow(begin_x, 2) + -0.00674076 *lens_ipow(begin_dx, 2)*begin_lambda + -0.000115117 *lens_ipow(begin_y, 2)*begin_lambda + -3.52006e-05 *lens_ipow(begin_x, 2)*begin_lambda + 7.98518e-05 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + 2.49933e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 2) + 1.63045e-08 *lens_ipow(begin_x, 4) + -0.00140898 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -9.33921e-09 *lens_ipow(begin_y, 5)*begin_dy + 1.49996e-10 *lens_ipow(begin_y, 6) + -2.92017e-05 *begin_x*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + 7.29006e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4) + -8.08935e-09 *lens_ipow(begin_x, 4)*begin_y*begin_dy + 0.00300443 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 3) + -6.72214e-11 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2)*begin_dx + -0.00210772 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 5) + -5.055e-06 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*begin_lambda+0.0f;
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
  out[4] =  + 1.14841 *begin_lambda + -1.45157 *lens_ipow(begin_lambda, 2) + -0.000801993 *begin_x*begin_dx*begin_lambda + 1.03479 *lens_ipow(begin_lambda, 4) + -0.223774 *lens_ipow(begin_dy, 4) + -0.233294 *lens_ipow(begin_dx, 4) + -0.000573572 *begin_y*begin_dy*lens_ipow(begin_lambda, 2) + -0.00471003 *begin_y*lens_ipow(begin_dy, 3) + -0.000251868 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -4.11126e-08 *lens_ipow(begin_y, 4) + -0.000107977 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.000232515 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -1.5417e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -3.45637e-08 *lens_ipow(begin_x, 4) + -0.711344 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -0.000114331 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -0.488441 *lens_ipow(begin_lambda, 6) + -0.0207565 *begin_x*lens_ipow(begin_dx, 5) + 3.25479e-08 *begin_x*lens_ipow(begin_y, 4)*begin_dx + -2.13673e-06 *lens_ipow(begin_x, 3)*begin_y*begin_dx*begin_dy + -0.010202 *begin_y*lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 3) + 1.33839e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_lambda + -3.51783e-05 *lens_ipow(begin_x, 3)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 5.17698e-11 *lens_ipow(begin_y, 7)*begin_dy + 7.79675e-11 *lens_ipow(begin_x, 7)*begin_dx + 1.62684e-12 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 7)*begin_dy + 2.41997e-12 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 4)*begin_dx + 1.50402e-12 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dy;
else
  out[4] = 0.0f;
} break;
