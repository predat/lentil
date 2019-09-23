case kodak__petzval__1948__85mm:
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
  pred_x =  + 65.1825 *begin_dx + 0.792427 *begin_x + 0.942722 *begin_dx*begin_lambda + 0.533382 *begin_y*begin_dx*begin_dy + 0.00936099 *begin_x*begin_y*begin_dy + 0.0144443 *lens_ipow(begin_x, 2)*begin_dx + 1.25818 *begin_dx*lens_ipow(begin_dy, 2) + 7.28418e-05 *begin_x*lens_ipow(begin_y, 2) + 6.70711e-05 *lens_ipow(begin_x, 3) + 0.130729 *begin_x*lens_ipow(begin_dy, 2) + 0.606349 *begin_x*lens_ipow(begin_dx, 2) + 0.00632968 *lens_ipow(begin_y, 2)*begin_dx + -0.633781 *begin_dx*lens_ipow(begin_lambda, 2) + -4.61727e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 2) + 3.10147e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -0.00622391 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 3) + 0.0640506 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 4.99658e-05 *lens_ipow(begin_x, 4)*begin_dx*begin_lambda + 0.00302131 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*begin_lambda + 2.67474e-07 *lens_ipow(begin_x, 5)*begin_lambda + 1.94411e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + 3.32672e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4) + 0.00318082 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -2.55993e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + -0.000125202 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -0.204956 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 4) + -0.13218 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_dy + 6706.62 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 4);
  pred_y =  + 0.792291 *begin_y + 65.3526 *begin_dy + 0.236246 *begin_dy*begin_lambda + 0.136052 *begin_y*lens_ipow(begin_dx, 2) + 0.0142852 *lens_ipow(begin_y, 2)*begin_dy + 0.60558 *begin_y*lens_ipow(begin_dy, 2) + 0.00954826 *begin_x*begin_y*begin_dx + -17.7662 *lens_ipow(begin_dx, 2)*begin_dy + 7.42811e-05 *lens_ipow(begin_x, 2)*begin_y + 6.32119e-05 *lens_ipow(begin_y, 3) + 0.693462 *lens_ipow(begin_dy, 3) + 69.9512 *lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 0.0278005 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 1.97307 *begin_x*begin_dx*begin_dy*begin_lambda + -1.7442 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + -0.0358943 *lens_ipow(begin_x, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -61.7746 *lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 2) + 5.45264e-05 *lens_ipow(begin_y, 4)*begin_dy*begin_lambda + 0.00383419 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*begin_lambda + 2.7191e-07 *lens_ipow(begin_y, 5)*begin_lambda + 0.0130185 *lens_ipow(begin_x, 2)*begin_dy*lens_ipow(begin_lambda, 3) + 1.49375 *begin_y*lens_ipow(begin_dy, 4)*begin_lambda + -5.56079e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 3) + 0.119447 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*begin_lambda + -9.20076e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.00283413 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.00880876 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 4) + -0.357318 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5);
  pred_dx =  + 0.5833 *begin_dx + -0.00822063 *begin_x + -0.00209434 *begin_dx*begin_lambda + 0.00953076 *begin_y*begin_dx*begin_dy + 0.000322591 *begin_x*begin_y*begin_dy + 0.000423784 *lens_ipow(begin_x, 2)*begin_dx + -0.228135 *lens_ipow(begin_dx, 3) + -0.208542 *begin_dx*lens_ipow(begin_dy, 2) + 2.52182e-06 *begin_x*lens_ipow(begin_y, 2) + 2.07663e-06 *lens_ipow(begin_x, 3) + 0.00350335 *begin_x*lens_ipow(begin_dy, 2) + 0.0115223 *begin_x*lens_ipow(begin_dx, 2) + 0.000148847 *lens_ipow(begin_y, 2)*begin_dx + 6.40657e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 8.28124e-07 *lens_ipow(begin_x, 4)*begin_dx + 0.000712744 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3) + 5.00459e-09 *lens_ipow(begin_x, 5) + 4.4834e-06 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 3.7264e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + 2.43621e-07 *lens_ipow(begin_x, 3)*begin_y*begin_dy + 4.30101e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -0.0011563 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 1.69087e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -0.00121115 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 3.27942e-09 *begin_x*lens_ipow(begin_y, 4)*begin_lambda + -2.57064e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + 4.96189e-07 *begin_x*lens_ipow(begin_y, 3)*begin_dy*begin_lambda + -0.0925869 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2);
  pred_dy =  + -0.00822906 *begin_y + 0.583176 *begin_dy + -0.00151021 *begin_dy*begin_lambda + 0.00379707 *begin_y*lens_ipow(begin_dx, 2) + 0.000428315 *lens_ipow(begin_y, 2)*begin_dy + 0.0117243 *begin_y*lens_ipow(begin_dy, 2) + 0.00920456 *begin_x*begin_dx*begin_dy + 0.000336506 *begin_x*begin_y*begin_dx + -0.220826 *lens_ipow(begin_dx, 2)*begin_dy + 2.8318e-06 *lens_ipow(begin_x, 2)*begin_y + 2.15945e-06 *lens_ipow(begin_y, 3) + 0.000146432 *lens_ipow(begin_x, 2)*begin_dy + -0.231086 *lens_ipow(begin_dy, 3) + 8.17362e-07 *lens_ipow(begin_y, 4)*begin_dy + 0.000729874 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + 2.463e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 5.88937e-08 *lens_ipow(begin_x, 3)*begin_y*begin_dx + 4.88496e-09 *lens_ipow(begin_y, 5) + 2.19939e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + 4.26953e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + -0.00019747 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_lambda + 3.29642e-07 *begin_x*lens_ipow(begin_y, 3)*begin_dx*begin_lambda + -0.00130659 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -0.112804 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -0.00184027 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 2) + 2.84192e-14 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 5) + -2.4178e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4)*begin_dx*begin_dy + 6.09359e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 65.1825  + 0.942722 *begin_lambda + 0.533382 *begin_y*begin_dy + 0.0144443 *lens_ipow(begin_x, 2) + 1.25818 *lens_ipow(begin_dy, 2) + 1.2127 *begin_x*begin_dx + 0.00632968 *lens_ipow(begin_y, 2) + -0.633781 *lens_ipow(begin_lambda, 2) + 3.10147e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -0.00622391 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 3) + 0.192152 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_lambda + 4.99658e-05 *lens_ipow(begin_x, 4)*begin_lambda + 0.00604262 *lens_ipow(begin_x, 3)*begin_dx*begin_lambda + 0.00636164 *begin_x*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -2.55993e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dy + -0.000125202 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -0.409911 *begin_x*begin_dx*lens_ipow(begin_lambda, 4) + -0.528719 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_dy + 33533.1 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4)+0.0f;
  dx1_domega0(0, 1) =  + 0.533382 *begin_y*begin_dx + 0.00936099 *begin_x*begin_y + 2.51636 *begin_dx*begin_dy + 0.261459 *begin_x*begin_dy + 1.94411e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3) + 0.00636164 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -2.55993e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx + -0.000250404 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + -0.13218 *begin_x*begin_y*lens_ipow(begin_dx, 4) + 26826.5 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 3)+0.0f;
  dx1_domega0(1, 0) =  + 0.272104 *begin_y*begin_dx + 0.00954826 *begin_x*begin_y + -35.5325 *begin_dx*begin_dy + 139.902 *begin_dx*begin_dy*begin_lambda + 1.97307 *begin_x*begin_dy*begin_lambda + -1.7442 *begin_x*begin_dy*lens_ipow(begin_lambda, 2) + -123.549 *begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + -9.20076e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dy + 0.00566826 *lens_ipow(begin_x, 2)*begin_y*begin_dx*lens_ipow(begin_dy, 2)+0.0f;
  dx1_domega0(1, 1) =  + 65.3526  + 0.236246 *begin_lambda + 0.0142852 *lens_ipow(begin_y, 2) + 1.21116 *begin_y*begin_dy + -17.7662 *lens_ipow(begin_dx, 2) + 2.08039 *lens_ipow(begin_dy, 2) + 69.9512 *lens_ipow(begin_dx, 2)*begin_lambda + 0.0278005 *lens_ipow(begin_x, 2)*begin_lambda + 1.97307 *begin_x*begin_dx*begin_lambda + -1.7442 *begin_x*begin_dx*lens_ipow(begin_lambda, 2) + -0.0358943 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 2) + -61.7746 *lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 5.45264e-05 *lens_ipow(begin_y, 4)*begin_lambda + 0.00766838 *lens_ipow(begin_y, 3)*begin_dy*begin_lambda + 0.0130185 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 3) + 5.97501 *begin_y*lens_ipow(begin_dy, 3)*begin_lambda + 0.35834 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -9.20076e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx + 0.00566826 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -0.00880876 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 4) + -0.714636 *begin_y*begin_dy*lens_ipow(begin_lambda, 5)+0.0f;
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