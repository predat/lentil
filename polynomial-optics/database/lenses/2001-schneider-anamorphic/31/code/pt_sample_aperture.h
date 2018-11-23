case schneider_anamorphic_2001_31mm:
{
float pred_x;
float pred_y;
float pred_dx;
float pred_dy;
float sqr_err = FLT_MAX;
for(int k=0;k<5&&sqr_err > 1e-4f;k++)
{
  const float begin_x = x + dist * dx;
  const float begin_y = y + dist * dy;
  const float begin_dx = dx;
  const float begin_dy = dy;
  const float begin_lambda = lambda;
  pred_x =  + 38.2347 *begin_dx + 0.608387 *begin_x + 0.0455654 *begin_x*begin_lambda + 1.91347 *begin_dx*begin_lambda + -0.632497 *begin_y*begin_dx*begin_dy + -0.0180557 *begin_x*begin_y*begin_dy + -0.0165069 *lens_ipow(begin_x, 2)*begin_dx + -22.2374 *lens_ipow(begin_dx, 3) + -26.0661 *begin_dx*lens_ipow(begin_dy, 2) + -0.000297703 *begin_x*lens_ipow(begin_y, 2) + -0.402827 *begin_x*lens_ipow(begin_dy, 2) + -0.583709 *begin_x*lens_ipow(begin_dx, 2) + -0.00767851 *lens_ipow(begin_y, 2)*begin_dx + -1.93805e-06 *lens_ipow(begin_x, 5) + -0.00154447 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -6.70053e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -0.00456894 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -7.48134e-07 *lens_ipow(begin_x, 6)*begin_dx + -0.000522748 *lens_ipow(begin_x, 4)*lens_ipow(begin_dx, 3) + -1.52652e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4) + 0.00135115 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -3.16492e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 4)*begin_dx + -8.08346e-08 *lens_ipow(begin_x, 7)*lens_ipow(begin_dx, 2) + -1.58349e-11 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 2) + -3.68029e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)*begin_dy + -1.73945e-07 *lens_ipow(begin_x, 6)*begin_y*begin_dx*begin_dy*begin_lambda + -2.81396e-09 *lens_ipow(begin_x, 7)*begin_y*begin_dy*begin_lambda + -5.51406e-15 *lens_ipow(begin_x, 11);
  pred_y =  + 0.600935 *begin_y + 37.8097 *begin_dy + 1.90326 *begin_dy*begin_lambda + 0.044445 *begin_y*begin_lambda + -14.445 *lens_ipow(begin_dx, 2)*begin_dy + -14.2223 *lens_ipow(begin_dy, 3) + -0.0896367 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -0.000209244 *lens_ipow(begin_y, 4)*begin_dy + -2.70094e-05 *lens_ipow(begin_x, 4)*begin_dy + -1.94845e-06 *lens_ipow(begin_x, 4)*begin_y + -1.64502e-06 *lens_ipow(begin_y, 5) + -0.00184781 *lens_ipow(begin_x, 3)*begin_dx*begin_dy + -0.0097277 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 0.0278868 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 4) + -1.39182e-05 *lens_ipow(begin_y, 5)*lens_ipow(begin_dx, 2) + -6.81606e-07 *begin_x*lens_ipow(begin_y, 5)*begin_dx + -5.26405e-07 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dy + -1.2304e-08 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3)*begin_lambda + -1.39145e-06 *lens_ipow(begin_x, 5)*begin_y*begin_dx*begin_lambda + -1.00513e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 7) + -3.25049e-06 *lens_ipow(begin_y, 6)*lens_ipow(begin_dx, 2)*begin_dy + 1.38572e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 5.48732e-11 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 7)*begin_lambda + 9.74859e-06 *lens_ipow(begin_x, 5)*begin_y*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -1.8263e-11 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 8)*begin_dy + -1.01573e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 7)*begin_dx + -2.43852e-07 *lens_ipow(begin_x, 6)*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 4.84324e-08 *begin_x*lens_ipow(begin_y, 7)*begin_dx*lens_ipow(begin_dy, 2);
  pred_dx =  + 0.217845 *begin_dx + -0.023376 *begin_x + 0.00256457 *begin_x*begin_lambda + -9.33661e-06 *lens_ipow(begin_x, 3) + 0.0523111 *begin_dx*lens_ipow(begin_lambda, 2) + -0.000379342 *begin_x*begin_y*begin_dy*begin_lambda + 0.0126976 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -1.60802 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + -1.2061e-07 *begin_x*lens_ipow(begin_y, 4) + -0.00158011 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.132402 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 3) + -0.0146078 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -0.000313629 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2)*begin_lambda + -8.84684e-09 *lens_ipow(begin_y, 6)*begin_dx + -2.24481e-08 *begin_x*lens_ipow(begin_y, 5)*begin_dy + -4.00284e-08 *lens_ipow(begin_x, 5)*begin_y*begin_dy + -8.84804e-10 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2) + -1.65539e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dx + 1.12291 *begin_y*lens_ipow(begin_dx, 5)*begin_dy + -3.07737e-10 *lens_ipow(begin_x, 7) + -1.0736e-07 *lens_ipow(begin_x, 6)*begin_dx*begin_lambda + -2.42159e-09 *lens_ipow(begin_y, 7)*begin_dx*begin_dy + -1.56822e-10 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 2)*begin_dx + -1.25905e-05 *lens_ipow(begin_x, 5)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.00746335 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 4)*lens_ipow(begin_lambda, 3) + -0.000632018 *lens_ipow(begin_x, 4)*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 3) + -2.26546e-10 *lens_ipow(begin_x, 7)*lens_ipow(begin_lambda, 3) + -2.17293e-11 *lens_ipow(begin_x, 8)*begin_y*begin_dx*begin_dy;
  pred_dy =  + -0.0227155 *begin_y + 0.234184 *begin_dy + 0.00169747 *begin_y*begin_lambda + -0.0197045 *begin_y*lens_ipow(begin_dy, 2) + -9.58064e-06 *lens_ipow(begin_y, 3) + -0.49814 *lens_ipow(begin_dy, 3) + -1.14394e-05 *lens_ipow(begin_y, 4)*begin_dy + -1.215e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dx + -0.0198671 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + -0.0125064 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -2.26947e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -0.201647 *begin_y*lens_ipow(begin_dy, 4) + -0.000229262 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + -8.91664e-08 *lens_ipow(begin_x, 4)*begin_y + -0.000678363 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + -2.79572e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy*begin_lambda + -0.0013179 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda + -3.65664e-10 *lens_ipow(begin_y, 7) + -0.00839617 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + -0.00110847 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -1.25627e-06 *lens_ipow(begin_x, 4)*begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -7.77965e-08 *lens_ipow(begin_x, 5)*begin_y*begin_dx*begin_lambda + -1.86465e-07 *lens_ipow(begin_x, 6)*lens_ipow(begin_dy, 3) + -0.0608653 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 4) + -1.56977e-10 *lens_ipow(begin_y, 8)*begin_dy*begin_lambda + -2.22795e-05 *lens_ipow(begin_x, 5)*begin_dx*lens_ipow(begin_dy, 3)*begin_lambda + 2.07232e-10 *lens_ipow(begin_x, 7)*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + -1.16035e-08 *lens_ipow(begin_y, 7)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2);
  Eigen::Matrix2f dx1_domega0;
  dx1_domega0(0, 0) =  + 38.2347  + 1.91347 *begin_lambda + -0.632497 *begin_y*begin_dy + -0.0165069 *lens_ipow(begin_x, 2) + -66.7121 *lens_ipow(begin_dx, 2) + -26.0661 *lens_ipow(begin_dy, 2) + -1.16742 *begin_x*begin_dx + -0.00767851 *lens_ipow(begin_y, 2) + -0.00308894 *begin_x*lens_ipow(begin_y, 2)*begin_dx + -6.70053e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -0.00913788 *lens_ipow(begin_x, 3)*begin_dx + -7.48134e-07 *lens_ipow(begin_x, 6) + -0.00156825 *lens_ipow(begin_x, 4)*lens_ipow(begin_dx, 2) + 0.00135115 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -3.16492e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 4) + -1.61669e-07 *lens_ipow(begin_x, 7)*begin_dx + -1.73945e-07 *lens_ipow(begin_x, 6)*begin_y*begin_dy*begin_lambda+0.0f;
  dx1_domega0(0, 1) =  + -0.632497 *begin_y*begin_dx + -0.0180557 *begin_x*begin_y + -52.1322 *begin_dx*begin_dy + -0.805654 *begin_x*begin_dy + 0.0027023 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda + -3.68029e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5) + -1.73945e-07 *lens_ipow(begin_x, 6)*begin_y*begin_dx*begin_lambda + -2.81396e-09 *lens_ipow(begin_x, 7)*begin_y*begin_lambda+0.0f;
  dx1_domega0(1, 0) =  + -28.89 *begin_dx*begin_dy + -0.179273 *begin_y*begin_dx*begin_lambda + -0.00184781 *lens_ipow(begin_x, 3)*begin_dy + -2.78364e-05 *lens_ipow(begin_y, 5)*begin_dx + -6.81606e-07 *begin_x*lens_ipow(begin_y, 5) + -1.39145e-06 *lens_ipow(begin_x, 5)*begin_y*begin_lambda + -6.50097e-06 *lens_ipow(begin_y, 6)*begin_dx*begin_dy + 2.77143e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dx*begin_dy*begin_lambda + 9.74859e-06 *lens_ipow(begin_x, 5)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + -1.01573e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 7) + -4.87704e-07 *lens_ipow(begin_x, 6)*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + 4.84324e-08 *begin_x*lens_ipow(begin_y, 7)*lens_ipow(begin_dy, 2)+0.0f;
  dx1_domega0(1, 1) =  + 37.8097  + 1.90326 *begin_lambda + -14.445 *lens_ipow(begin_dx, 2) + -42.6669 *lens_ipow(begin_dy, 2) + -0.000209244 *lens_ipow(begin_y, 4) + -2.70094e-05 *lens_ipow(begin_x, 4) + -0.00184781 *lens_ipow(begin_x, 3)*begin_dx + -0.0194554 *lens_ipow(begin_y, 3)*begin_dy + 0.111547 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 3) + -5.26405e-07 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2) + -3.25049e-06 *lens_ipow(begin_y, 6)*lens_ipow(begin_dx, 2) + 1.38572e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2)*begin_lambda + 1.94972e-05 *lens_ipow(begin_x, 5)*begin_y*begin_dx*begin_dy*begin_lambda + -1.8263e-11 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 8) + 9.68647e-08 *begin_x*lens_ipow(begin_y, 7)*begin_dx*begin_dy+0.0f;
  Eigen::Matrix2f invJ;
  const float invdet = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
  invJ(0, 0) =  dx1_domega0(1, 1)*invdet;
  invJ(1, 1) =  dx1_domega0(0, 0)*invdet;
  invJ(0, 1) = -dx1_domega0(0, 1)*invdet;
  invJ(1, 0) = -dx1_domega0(1, 0)*invdet;
  const std::vector<float> dx1 = {out_x - pred_x, out_y - pred_y};
  for(int i=0;i<2;i++)
  {
    dx += invJ(0, i)*dx1[i];
    dy += invJ(1, i)*dx1[i];
  }
  sqr_err = dx1[0]*dx1[0] + dx1[1]*dx1[1];
}
out_dx = pred_dx;
out_dy = pred_dy;
} break;