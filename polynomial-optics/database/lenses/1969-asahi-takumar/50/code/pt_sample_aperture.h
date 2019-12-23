case asahi__takumar__1969__50mm:
{
double pred_x;
double pred_y;
double pred_dx;
double pred_dy;
double sqr_err = FLT_MAX;
for(int k=0;k<5&&sqr_err > 1e-4f;k++)
{
  const double begin_x = x + dist * dx;
  const double begin_y = y + dist * dy;
  const double begin_dx = dx;
  const double begin_dy = dy;
  const double begin_lambda = lambda;
  pred_x =  + 30.5049 *begin_dx + 0.329174 *begin_x + 6.01689 *begin_dx*begin_lambda + 0.202922 *begin_x*begin_lambda + -4.16436 *begin_dx*lens_ipow(begin_lambda, 2) + -17.4556 *begin_dx*lens_ipow(begin_dy, 2) + -18.1709 *lens_ipow(begin_dx, 3) + -0.192721 *begin_y*begin_dx*begin_dy + -0.142731 *begin_x*lens_ipow(begin_lambda, 2) + -0.161926 *begin_x*lens_ipow(begin_dy, 2) + -0.279053 *begin_x*lens_ipow(begin_dx, 2) + 0.00165428 *begin_x*begin_y*begin_dy + -0.000111406 *begin_x*lens_ipow(begin_y, 2) + 0.0036776 *lens_ipow(begin_x, 2)*begin_dx + -0.000114397 *lens_ipow(begin_x, 3) + 0.104387 *begin_y*begin_dx*begin_dy*begin_lambda + 0.00360287 *lens_ipow(begin_y, 2)*begin_dx*begin_lambda + 0.230411 *begin_x*lens_ipow(begin_dy, 4) + -2.10355e-07 *begin_x*lens_ipow(begin_y, 4) + -0.0124531 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + -7.16216e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -1.90249e-07 *lens_ipow(begin_x, 5) + 6.61838 *lens_ipow(begin_dx, 5)*begin_lambda + 5.91987e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + -0.0268584 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + -8.50346 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3)*begin_lambda + 0.243122 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_dy*begin_lambda + -4.29393e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx*begin_dy;
  pred_y =  + 30.5276 *begin_dy + 0.32963 *begin_y + 5.92349 *begin_dy*begin_lambda + 0.200971 *begin_y*begin_lambda + -4.08016 *begin_dy*lens_ipow(begin_lambda, 2) + -18.0714 *lens_ipow(begin_dy, 3) + -17.5163 *lens_ipow(begin_dx, 2)*begin_dy + -0.140901 *begin_y*lens_ipow(begin_lambda, 2) + -0.277072 *begin_y*lens_ipow(begin_dy, 2) + -0.163485 *begin_y*lens_ipow(begin_dx, 2) + 0.00370915 *lens_ipow(begin_y, 2)*begin_dy + -0.000113522 *lens_ipow(begin_y, 3) + -0.19434 *begin_x*begin_dx*begin_dy + 0.0016427 *begin_x*begin_y*begin_dx + -0.000111942 *lens_ipow(begin_x, 2)*begin_y + 0.0980336 *begin_x*begin_dx*begin_dy*begin_lambda + 0.00352017 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 0.240269 *begin_y*lens_ipow(begin_dx, 4) + -0.0124114 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -1.93144e-07 *lens_ipow(begin_y, 5) + -7.08109e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -2.07091e-07 *lens_ipow(begin_x, 4)*begin_y + 5.88861 *lens_ipow(begin_dy, 5)*begin_lambda + 5.77064e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + -0.0249123 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + 0.265028 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4)*begin_lambda + -76.3066 *begin_x*lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 3)*begin_lambda + -4.14281e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 6)*begin_dx*begin_dy;
  pred_dx =  + 0.357771 *begin_dx + -0.0296855 *begin_x + 0.0101779 *begin_x*begin_lambda + -0.703354 *begin_dx*lens_ipow(begin_dy, 2) + -0.743221 *lens_ipow(begin_dx, 3) + -0.0266631 *begin_y*begin_dx*begin_dy + -0.000151198 *lens_ipow(begin_y, 2)*begin_dx + -0.00739776 *begin_x*lens_ipow(begin_lambda, 2) + -0.0119145 *begin_x*lens_ipow(begin_dy, 2) + -0.0395432 *begin_x*lens_ipow(begin_dx, 2) + -0.000135461 *begin_x*begin_y*begin_dy + -1.19806e-05 *begin_x*lens_ipow(begin_y, 2) + -0.000380977 *lens_ipow(begin_x, 2)*begin_dx + -1.23738e-05 *lens_ipow(begin_x, 3) + -1.28446e-08 *begin_x*lens_ipow(begin_y, 4) + 9.36214e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -9.71553e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2) + -3.87356e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 1.13411e-06 *lens_ipow(begin_x, 4)*begin_dx + -8.59546e-09 *lens_ipow(begin_x, 5) + 4.77969e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + -8.69502e-07 *lens_ipow(begin_x, 4)*begin_dx*begin_lambda + 4.34739e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + 3.22971 *lens_ipow(begin_dx, 7)*begin_lambda + 0.000291378 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 3)*begin_dy*begin_lambda + 7.08356e-09 *lens_ipow(begin_y, 6)*lens_ipow(begin_dx, 3) + 158.063 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 4)*begin_lambda + 1.54944e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 2)*begin_dx*begin_lambda;
  pred_dy =  + 0.357532 *begin_dy + -0.0297452 *begin_y + 0.0103829 *begin_y*begin_lambda + -0.745592 *lens_ipow(begin_dy, 3) + -0.700644 *lens_ipow(begin_dx, 2)*begin_dy + -0.00757222 *begin_y*lens_ipow(begin_lambda, 2) + -0.0395322 *begin_y*lens_ipow(begin_dy, 2) + -0.0121053 *begin_y*lens_ipow(begin_dx, 2) + -0.000375296 *lens_ipow(begin_y, 2)*begin_dy + -1.22772e-05 *lens_ipow(begin_y, 3) + -0.0255495 *begin_x*begin_dx*begin_dy + -0.00014229 *begin_x*begin_y*begin_dx + -0.000140011 *lens_ipow(begin_x, 2)*begin_dy + -1.19233e-05 *lens_ipow(begin_x, 2)*begin_y + -9.35939e-06 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + 1.12998e-06 *lens_ipow(begin_y, 4)*begin_dy + -8.86e-09 *lens_ipow(begin_y, 5) + 8.06182e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + -4.00631e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -1.31014e-08 *lens_ipow(begin_x, 4)*begin_y + -8.85597e-07 *lens_ipow(begin_y, 4)*begin_dy*begin_lambda + 4.77163e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + 4.1772e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dx + 3.04613 *lens_ipow(begin_dy, 7)*begin_lambda + 9.36553 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 5)*begin_lambda + 6.30406e-09 *lens_ipow(begin_x, 6)*lens_ipow(begin_dy, 3) + 1.62537e-11 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 6)*begin_dy*begin_lambda + -20.5689 *begin_x*lens_ipow(begin_dx, 7)*lens_ipow(begin_dy, 3);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 30.5049  + 6.01689 *begin_lambda + -4.16436 *lens_ipow(begin_lambda, 2) + -17.4556 *lens_ipow(begin_dy, 2) + -54.5126 *lens_ipow(begin_dx, 2) + -0.192721 *begin_y*begin_dy + -0.558107 *begin_x*begin_dx + 0.0036776 *lens_ipow(begin_x, 2) + 0.104387 *begin_y*begin_dy*begin_lambda + 0.00360287 *lens_ipow(begin_y, 2)*begin_lambda + -0.0124531 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + 33.0919 *lens_ipow(begin_dx, 4)*begin_lambda + -0.0805753 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -25.5104 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3)*begin_lambda + 0.972488 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_dy*begin_lambda + -4.29393e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dy+0.0f;
  dx1_domega0(0, 1) =  + -34.9112 *begin_dx*begin_dy + -0.192721 *begin_y*begin_dx + -0.323853 *begin_x*begin_dy + 0.00165428 *begin_x*begin_y + 0.104387 *begin_y*begin_dx*begin_lambda + 0.921646 *begin_x*lens_ipow(begin_dy, 3) + -0.0249061 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + -25.5104 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2)*begin_lambda + 0.243122 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_lambda + -4.29393e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx+0.0f;
  dx1_domega0(1, 0) =  + -35.0325 *begin_dx*begin_dy + -0.326969 *begin_y*begin_dx + -0.19434 *begin_x*begin_dy + 0.0016427 *begin_x*begin_y + 0.0980336 *begin_x*begin_dy*begin_lambda + 0.961077 *begin_y*lens_ipow(begin_dx, 3) + -0.0248228 *lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.265028 *begin_x*begin_y*lens_ipow(begin_dy, 4)*begin_lambda + -381.533 *begin_x*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 3)*begin_lambda + -4.14281e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 6)*begin_dy+0.0f;
  dx1_domega0(1, 1) =  + 30.5276  + 5.92349 *begin_lambda + -4.08016 *lens_ipow(begin_lambda, 2) + -54.2143 *lens_ipow(begin_dy, 2) + -17.5163 *lens_ipow(begin_dx, 2) + -0.554144 *begin_y*begin_dy + 0.00370915 *lens_ipow(begin_y, 2) + -0.19434 *begin_x*begin_dx + 0.0980336 *begin_x*begin_dx*begin_lambda + 0.00352017 *lens_ipow(begin_x, 2)*begin_lambda + -0.0124114 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 29.4431 *lens_ipow(begin_dy, 4)*begin_lambda + -0.0747368 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 1.06011 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 3)*begin_lambda + -228.92 *begin_x*lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 2)*begin_lambda + -4.14281e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 6)*begin_dx+0.0f;
  Eigen::Matrix2d invJ;
  const double invdet = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
  invJ(0, 0) =  dx1_domega0(1, 1)*invdet;
  invJ(1, 1) =  dx1_domega0(0, 0)*invdet;
  invJ(0, 1) = -dx1_domega0(0, 1)*invdet;
  invJ(1, 0) = -dx1_domega0(1, 0)*invdet;
  const Eigen::Vector2d dx1(out_x - pred_x, out_y - pred_y);
  for(int i=0;i<2;i++)
  {
    dx += invJ(0, i)*dx1(i);
    dy += invJ(1, i)*dx1(i);
  }
  sqr_err = dx1(0)*dx1(0) + dx1(1)*dx1(1);
}
out_dx = pred_dx;
out_dy = pred_dy;
} break;
