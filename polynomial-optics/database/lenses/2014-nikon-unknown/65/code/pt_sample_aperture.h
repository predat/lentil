case nikon__unknown__2014__65mm:
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
  pred_x =  + 42.0563 *begin_dx + 0.300576 *begin_x + 10.1414 *begin_dx*begin_lambda + 0.214202 *begin_x*begin_lambda + -6.97731 *begin_dx*lens_ipow(begin_lambda, 2) + -21.0205 *begin_dx*lens_ipow(begin_dy, 2) + -22.0311 *lens_ipow(begin_dx, 3) + -0.0407341 *begin_y*begin_dx*begin_dy + 0.00120982 *lens_ipow(begin_y, 2)*begin_dx + -0.149684 *begin_x*lens_ipow(begin_lambda, 2) + -0.106212 *begin_x*lens_ipow(begin_dy, 2) + -0.151312 *begin_x*lens_ipow(begin_dx, 2) + -8.02976e-05 *begin_x*lens_ipow(begin_y, 2) + -9.74553e-05 *lens_ipow(begin_x, 3) + 0.00162615 *begin_x*begin_y*begin_dy*begin_lambda + 0.00276732 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 5.28753 *lens_ipow(begin_dx, 5) + -0.00657433 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 0.149579 *begin_x*lens_ipow(begin_dy, 4) + -4.9183e-08 *begin_x*lens_ipow(begin_y, 4) + -2.12565e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -0.00761878 *begin_x*begin_y*lens_ipow(begin_dy, 3)*begin_lambda + -0.0177432 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 2.13574e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + -4.30229 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3) + 0.0659996 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_dy + 0.000472109 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 1.24775e-08 *lens_ipow(begin_x, 6)*begin_dx*begin_lambda;
  pred_y =  + 42.0453 *begin_dy + 0.300596 *begin_y + 10.1934 *begin_dy*begin_lambda + 0.214154 *begin_y*begin_lambda + -7.0263 *begin_dy*lens_ipow(begin_lambda, 2) + -22.0459 *lens_ipow(begin_dy, 3) + -21.0386 *lens_ipow(begin_dx, 2)*begin_dy + -0.149526 *begin_y*lens_ipow(begin_lambda, 2) + -0.151727 *begin_y*lens_ipow(begin_dy, 2) + -0.106266 *begin_y*lens_ipow(begin_dx, 2) + -9.76492e-05 *lens_ipow(begin_y, 3) + -0.0405621 *begin_x*begin_dx*begin_dy + 0.00120503 *lens_ipow(begin_x, 2)*begin_dy + -8.04831e-05 *lens_ipow(begin_x, 2)*begin_y + 0.00275099 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.00165483 *begin_x*begin_y*begin_dx*begin_lambda + 5.27233 *lens_ipow(begin_dy, 5) + 0.148119 *begin_y*lens_ipow(begin_dx, 4) + -0.00654718 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + -2.05928e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -4.88595e-08 *lens_ipow(begin_x, 4)*begin_y + -0.0175725 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -0.00793088 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_lambda + 2.02634e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + 0.00047923 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -4.38213 *begin_x*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3) + 0.0651743 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4) + 1.25541e-08 *lens_ipow(begin_y, 6)*begin_dy*begin_lambda;
  pred_dx =  + 0.323165 *begin_dx + -0.0215832 *begin_x + 0.0071058 *begin_x*begin_lambda + -0.484014 *begin_dx*lens_ipow(begin_dy, 2) + -0.00820278 *begin_y*begin_dx*begin_dy + -0.005099 *begin_x*lens_ipow(begin_lambda, 2) + -0.00446894 *begin_x*lens_ipow(begin_dy, 2) + -0.0123398 *begin_x*lens_ipow(begin_dx, 2) + 7.05871e-05 *begin_x*begin_y*begin_dy + -4.9807e-06 *begin_x*lens_ipow(begin_y, 2) + 5.21162e-05 *lens_ipow(begin_x, 2)*begin_dx + -5.16187e-06 *lens_ipow(begin_x, 3) + -1.37406 *lens_ipow(begin_dx, 3)*begin_lambda + 0.68363 *begin_dx*lens_ipow(begin_dy, 4) + 0.878525 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + 1.40565 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + -0.000268392 *begin_x*begin_y*lens_ipow(begin_dy, 3) + -0.000489878 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -6.29145e-06 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.000291384 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3) + -8.61006e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 1.27682e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + -0.000731278 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 1.16787e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + 5.28174e-10 *lens_ipow(begin_x, 6)*begin_dx + 11.364 *lens_ipow(begin_dx, 5)*lens_ipow(begin_lambda, 3) + -12.6205 *lens_ipow(begin_dx, 5)*lens_ipow(begin_lambda, 4) + 3.94737e-12 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 4)*begin_dx;
  pred_dy =  + 0.323567 *begin_dy + -0.021683 *begin_y + 0.00739137 *begin_y*begin_lambda + -0.294577 *lens_ipow(begin_dy, 3) + -0.482158 *lens_ipow(begin_dx, 2)*begin_dy + -0.00535879 *begin_y*lens_ipow(begin_lambda, 2) + -0.0122547 *begin_y*lens_ipow(begin_dy, 2) + -0.00426471 *begin_y*lens_ipow(begin_dx, 2) + 3.30354e-05 *lens_ipow(begin_y, 2)*begin_dy + -5.02271e-06 *lens_ipow(begin_y, 3) + -0.00816137 *begin_x*begin_dx*begin_dy + 7.2313e-05 *begin_x*begin_y*begin_dx + -4.94152e-06 *lens_ipow(begin_x, 2)*begin_y + -0.353751 *lens_ipow(begin_dy, 3)*begin_lambda + 1.43553 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 0.677763 *lens_ipow(begin_dx, 4)*begin_dy + -0.000271614 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + 2.12898e-07 *lens_ipow(begin_y, 4)*begin_dy + -0.000466641 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.000268153 *begin_x*begin_y*lens_ipow(begin_dx, 3) + -6.10089e-06 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2) + -9.00319e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 1.32226 *lens_ipow(begin_dy, 5)*begin_lambda + 1.29162e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + -0.000847798 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 2) + 1.07877e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dx + -2.76158e-11 *lens_ipow(begin_y, 7)*lens_ipow(begin_dx, 2) + 3.95543e-12 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 4)*begin_dy;
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 42.0563  + 10.1414 *begin_lambda + -6.97731 *lens_ipow(begin_lambda, 2) + -21.0205 *lens_ipow(begin_dy, 2) + -66.0932 *lens_ipow(begin_dx, 2) + -0.0407341 *begin_y*begin_dy + 0.00120982 *lens_ipow(begin_y, 2) + -0.302624 *begin_x*begin_dx + 0.00276732 *lens_ipow(begin_x, 2)*begin_lambda + 26.4377 *lens_ipow(begin_dx, 4) + -0.019723 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.0177432 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -12.9069 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 0.263999 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_dy + 0.000944219 *lens_ipow(begin_x, 3)*begin_dx*lens_ipow(begin_lambda, 2) + 1.24775e-08 *lens_ipow(begin_x, 6)*begin_lambda+0.0f;
  dx1_domega0(0, 1) =  + -42.041 *begin_dx*begin_dy + -0.0407341 *begin_y*begin_dx + -0.212424 *begin_x*begin_dy + 0.00162615 *begin_x*begin_y*begin_lambda + 0.598316 *begin_x*lens_ipow(begin_dy, 3) + -0.0228563 *begin_x*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + -0.0354864 *lens_ipow(begin_x, 2)*begin_dx*begin_dy*begin_lambda + -12.9069 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 0.0659996 *begin_x*begin_y*lens_ipow(begin_dx, 4)+0.0f;
  dx1_domega0(1, 0) =  + -42.0772 *begin_dx*begin_dy + -0.212533 *begin_y*begin_dx + -0.0405621 *begin_x*begin_dy + 0.00165483 *begin_x*begin_y*begin_lambda + 0.592477 *begin_y*lens_ipow(begin_dx, 3) + -0.035145 *lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda + -0.0237926 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_lambda + -13.1464 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 0.0651743 *begin_x*begin_y*lens_ipow(begin_dy, 4)+0.0f;
  dx1_domega0(1, 1) =  + 42.0453  + 10.1934 *begin_lambda + -7.0263 *lens_ipow(begin_lambda, 2) + -66.1378 *lens_ipow(begin_dy, 2) + -21.0386 *lens_ipow(begin_dx, 2) + -0.303454 *begin_y*begin_dy + -0.0405621 *begin_x*begin_dx + 0.00120503 *lens_ipow(begin_x, 2) + 0.00275099 *lens_ipow(begin_y, 2)*begin_lambda + 26.3617 *lens_ipow(begin_dy, 4) + -0.0196416 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.0175725 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + 0.00095846 *lens_ipow(begin_y, 3)*begin_dy*lens_ipow(begin_lambda, 2) + -13.1464 *begin_x*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 0.260697 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 3) + 1.25541e-08 *lens_ipow(begin_y, 6)*begin_lambda+0.0f;
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
