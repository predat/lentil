case asahi__takumar__1970__22mm:
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
  pred_x =  + 23.0154 *begin_dx + 0.586679 *begin_x + 0.0122911 *begin_x*begin_lambda + 0.370786 *begin_dx*lens_ipow(begin_lambda, 2) + 4.63789 *begin_dx*lens_ipow(begin_dy, 2) + 4.65475 *lens_ipow(begin_dx, 3) + 1.18214 *begin_y*begin_dx*begin_dy + 0.0311629 *lens_ipow(begin_y, 2)*begin_dx + 0.696488 *begin_x*lens_ipow(begin_dy, 2) + 1.85087 *begin_x*lens_ipow(begin_dx, 2) + 0.0685757 *begin_x*begin_y*begin_dy + 0.00121114 *begin_x*lens_ipow(begin_y, 2) + 0.0988237 *lens_ipow(begin_x, 2)*begin_dx + 0.0012123 *lens_ipow(begin_x, 3) + 7.08548e-05 *lens_ipow(begin_x, 3)*begin_lambda + -0.00108664 *lens_ipow(begin_y, 3)*begin_dx*begin_dy + -2.76434e-05 *lens_ipow(begin_y, 4)*begin_dx + -4.08336e-07 *lens_ipow(begin_x, 5) + 0.000701882 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -2.32928e-09 *begin_x*lens_ipow(begin_y, 6) + -0.000113497 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 9.89296e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + 4.73509e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + -2.27477e-05 *lens_ipow(begin_x, 4)*begin_y*begin_dx*begin_dy + 7.93525e-06 *lens_ipow(begin_x, 5)*lens_ipow(begin_dy, 2) + -0.000386548 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -0.00201174 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 6) + -1.25643e-11 *lens_ipow(begin_x, 9)*lens_ipow(begin_dx, 2);
  pred_y =  + 22.8925 *begin_dy + 0.585689 *begin_y + 0.435732 *begin_dy*begin_lambda + 0.0162423 *begin_y*begin_lambda + 4.64388 *lens_ipow(begin_dy, 3) + 4.51208 *lens_ipow(begin_dx, 2)*begin_dy + 1.83358 *begin_y*lens_ipow(begin_dy, 2) + 0.619339 *begin_y*lens_ipow(begin_dx, 2) + 0.0975939 *lens_ipow(begin_y, 2)*begin_dy + 0.00119192 *lens_ipow(begin_y, 3) + 1.13719 *begin_x*begin_dx*begin_dy + 0.0644392 *begin_x*begin_y*begin_dx + 0.0302182 *lens_ipow(begin_x, 2)*begin_dy + 0.00119276 *lens_ipow(begin_x, 2)*begin_y + 0.00167998 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + -0.00138992 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 4.98425e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dx + 2.90685e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dx + -0.0392615 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_lambda + 0.00075907 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + -4.69719e-09 *lens_ipow(begin_y, 7) + 4.68483e-06 *lens_ipow(begin_x, 4)*begin_y*lens_ipow(begin_dy, 2) + 8.88838e-09 *lens_ipow(begin_y, 7)*begin_lambda + -1.70326 *begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_lambda, 5) + 6.10699e-07 *lens_ipow(begin_y, 6)*begin_dy*lens_ipow(begin_lambda, 3) + 1.52515e-05 *lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 4) + 1.48252e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)*begin_dx*lens_ipow(begin_dy, 2) + 7.24271e-09 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy;
  pred_dx =  + 1.30582 *begin_dx + -0.0155887 *begin_x + -0.962147 *begin_dx*begin_lambda + 0.668627 *begin_dx*lens_ipow(begin_lambda, 2) + 1.08121 *begin_dx*lens_ipow(begin_dy, 2) + 1.09434 *lens_ipow(begin_dx, 3) + 0.113469 *begin_y*begin_dx*begin_dy + 0.0040014 *lens_ipow(begin_y, 2)*begin_dx + -0.0179961 *begin_x*lens_ipow(begin_lambda, 2) + 0.0640044 *begin_x*lens_ipow(begin_dy, 2) + 0.173941 *begin_x*lens_ipow(begin_dx, 2) + 0.00767156 *begin_x*begin_y*begin_dy + 0.000178341 *begin_x*lens_ipow(begin_y, 2) + 0.0112866 *lens_ipow(begin_x, 2)*begin_dx + 0.000174471 *lens_ipow(begin_x, 3) + 0.0167325 *begin_x*lens_ipow(begin_lambda, 3) + 2.25849e-06 *begin_x*lens_ipow(begin_y, 3)*begin_dy + -0.000339634 *lens_ipow(begin_x, 2)*begin_y*begin_dx*begin_dy + -0.000149125 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -3.18288e-06 *lens_ipow(begin_y, 4)*begin_dx*begin_lambda + -0.000890058 *lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 3) + 0.000398681 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 4) + 1.94395e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + 4.0014e-07 *lens_ipow(begin_x, 5)*lens_ipow(begin_dx, 2)*begin_lambda + 0.00084668 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 7.54668e-05 *lens_ipow(begin_x, 4)*lens_ipow(begin_dx, 5) + 3.69043e-09 *lens_ipow(begin_x, 7)*lens_ipow(begin_dy, 2) + -6.78706e-08 *lens_ipow(begin_x, 6)*begin_y*lens_ipow(begin_dx, 3)*begin_dy;
  pred_dy =  + 1.30591 *begin_dy + -0.0158166 *begin_y + -0.968762 *begin_dy*begin_lambda + 0.674877 *begin_dy*lens_ipow(begin_lambda, 2) + 1.11089 *lens_ipow(begin_dy, 3) + 1.12075 *lens_ipow(begin_dx, 2)*begin_dy + -0.0112712 *begin_y*lens_ipow(begin_lambda, 2) + 0.174567 *begin_y*lens_ipow(begin_dy, 2) + 0.0653023 *begin_y*lens_ipow(begin_dx, 2) + 0.0115454 *lens_ipow(begin_y, 2)*begin_dy + 0.000174194 *lens_ipow(begin_y, 3) + 0.111168 *begin_x*begin_dx*begin_dy + 0.00767795 *begin_x*begin_y*begin_dx + 0.00388816 *lens_ipow(begin_x, 2)*begin_dy + 0.000173993 *lens_ipow(begin_x, 2)*begin_y + 0.0114241 *begin_y*lens_ipow(begin_lambda, 4) + 1.92796e-06 *lens_ipow(begin_x, 3)*begin_y*begin_dx + -0.00110714 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 4) + 9.73381e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 2) + -3.25646e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 3.35205e-05 *lens_ipow(begin_x, 4)*lens_ipow(begin_dx, 2)*begin_dy + 1.103e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3) + -0.0184278 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 5)*begin_lambda + -5.53542e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dy*begin_lambda + -4.50424e-08 *lens_ipow(begin_x, 6)*begin_dy*begin_lambda + 8.18884e-09 *lens_ipow(begin_y, 7)*lens_ipow(begin_dx, 2)*begin_lambda + -1.10057e-08 *begin_x*lens_ipow(begin_y, 6)*begin_dx*begin_dy*begin_lambda + 1.37441e-10 *lens_ipow(begin_x, 8)*begin_dy*lens_ipow(begin_lambda, 2);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 23.0154  + 0.370786 *lens_ipow(begin_lambda, 2) + 4.63789 *lens_ipow(begin_dy, 2) + 13.9642 *lens_ipow(begin_dx, 2) + 1.18214 *begin_y*begin_dy + 0.0311629 *lens_ipow(begin_y, 2) + 3.70175 *begin_x*begin_dx + 0.0988237 *lens_ipow(begin_x, 2) + -0.00108664 *lens_ipow(begin_y, 3)*begin_dy + -2.76434e-05 *lens_ipow(begin_y, 4) + -0.00034049 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -2.27477e-05 *lens_ipow(begin_x, 4)*begin_y*begin_dy + -0.000773095 *lens_ipow(begin_x, 3)*begin_y*begin_dx*begin_dy*begin_lambda + -2.51287e-11 *lens_ipow(begin_x, 9)*begin_dx+0.0f;
  dx1_domega0(0, 1) =  + 9.27579 *begin_dx*begin_dy + 1.18214 *begin_y*begin_dx + 1.39298 *begin_x*begin_dy + 0.0685757 *begin_x*begin_y + -0.00108664 *lens_ipow(begin_y, 3)*begin_dx + 0.00140376 *begin_x*lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 1.97859e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dy + 4.73509e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3) + -2.27477e-05 *lens_ipow(begin_x, 4)*begin_y*begin_dx + 1.58705e-05 *lens_ipow(begin_x, 5)*begin_dy + -0.000386548 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -0.00402347 *lens_ipow(begin_x, 3)*begin_dy*lens_ipow(begin_lambda, 6)+0.0f;
  dx1_domega0(1, 0) =  + 9.02417 *begin_dx*begin_dy + 1.23868 *begin_y*begin_dx + 1.13719 *begin_x*begin_dy + 0.0644392 *begin_x*begin_y + 0.00335996 *lens_ipow(begin_y, 3)*begin_dx + -0.00138992 *begin_x*lens_ipow(begin_y, 2)*begin_dy + 4.98425e-05 *begin_x*lens_ipow(begin_y, 3) + 2.90685e-05 *lens_ipow(begin_x, 3)*begin_y + -0.117785 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -6.81305 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 5) + 1.48252e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 2) + 1.44854e-08 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 2)*begin_dx*begin_dy+0.0f;
  dx1_domega0(1, 1) =  + 22.8925  + 0.435732 *begin_lambda + 13.9316 *lens_ipow(begin_dy, 2) + 4.51208 *lens_ipow(begin_dx, 2) + 3.66717 *begin_y*begin_dy + 0.0975939 *lens_ipow(begin_y, 2) + 1.13719 *begin_x*begin_dx + 0.0302182 *lens_ipow(begin_x, 2) + -0.00138992 *begin_x*lens_ipow(begin_y, 2)*begin_dx + 0.00151814 *lens_ipow(begin_x, 2)*begin_y*begin_dy*begin_lambda + 9.36965e-06 *lens_ipow(begin_x, 4)*begin_y*begin_dy + 6.10699e-07 *lens_ipow(begin_y, 6)*lens_ipow(begin_lambda, 3) + 3.05029e-05 *lens_ipow(begin_y, 5)*begin_dy*lens_ipow(begin_lambda, 4) + 2.96505e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)*begin_dx*begin_dy + 7.24271e-09 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)+0.0f;
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
