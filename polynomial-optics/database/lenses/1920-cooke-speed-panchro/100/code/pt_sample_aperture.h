case cooke__speed_panchro__1920__100mm:
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
  pred_x =  + 70.0927 *begin_dx + 0.642366 *begin_x + 0.0856359 *begin_x*begin_lambda + 8.207 *begin_dx*begin_lambda + -0.306917 *begin_y*begin_dx*begin_dy + 0.0010317 *lens_ipow(begin_x, 2)*begin_dx + -45.8417 *lens_ipow(begin_dx, 3) + -0.0586154 *begin_x*lens_ipow(begin_lambda, 2) + -46.0844 *begin_dx*lens_ipow(begin_dy, 2) + 1.06655e-05 *begin_x*lens_ipow(begin_y, 2) + 9.49318e-06 *lens_ipow(begin_x, 3) + -0.256023 *begin_x*lens_ipow(begin_dy, 2) + -0.558043 *begin_x*lens_ipow(begin_dx, 2) + 0.000992735 *lens_ipow(begin_y, 2)*begin_dx + -5.60491 *begin_dx*lens_ipow(begin_lambda, 2) + -0.0266219 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -3.76283 *begin_x*lens_ipow(begin_dx, 4) + -0.031807 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3) + -3.50353 *begin_y*lens_ipow(begin_dx, 3)*begin_dy + -121.218 *lens_ipow(begin_dx, 5) + -3.76677 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -104.008 *begin_dx*lens_ipow(begin_dy, 4) + -0.0210866 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -2.95128 *begin_y*begin_dx*lens_ipow(begin_dy, 3) + -0.0143364 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + -0.020339 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + -234.842 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 3.98383e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dx;
  pred_y =  + 0.642885 *begin_y + 70.1796 *begin_dy + 8.1424 *begin_dy*begin_lambda + 0.0847499 *begin_y*begin_lambda + -0.274506 *begin_y*lens_ipow(begin_dx, 2) + 0.000578186 *lens_ipow(begin_y, 2)*begin_dy + -0.64955 *begin_y*lens_ipow(begin_dy, 2) + -52.0577 *lens_ipow(begin_dx, 2)*begin_dy + -0.0578827 *begin_y*lens_ipow(begin_lambda, 2) + 1.05888e-05 *lens_ipow(begin_x, 2)*begin_y + -5.55115 *begin_dy*lens_ipow(begin_lambda, 2) + 9.95709e-06 *lens_ipow(begin_y, 3) + 0.000744536 *lens_ipow(begin_x, 2)*begin_dy + -51.3611 *lens_ipow(begin_dy, 3) + -1.88091 *begin_x*begin_dx*begin_dy*begin_lambda + 2.59627 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + -0.0120035 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_dy + -1.92652 *begin_x*lens_ipow(begin_dx, 3)*begin_dy + -0.00337103 *begin_x*begin_y*lens_ipow(begin_dx, 3) + -57.7709 *lens_ipow(begin_dx, 4)*begin_dy + 0.787701 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4) + -684.315 *lens_ipow(begin_dy, 7) + -0.102244 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 5) + -1.40302 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 4) + -0.207061 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 5) + -24.7483 *begin_y*lens_ipow(begin_dy, 6) + 0.00887828 *begin_x*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 3) + -6442.83 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 7);
  pred_dx =  + 0.457136 *begin_dx + -0.0101037 *begin_x + 0.0027181 *begin_x*begin_lambda + 0.10236 *begin_dx*begin_lambda + -0.0169213 *begin_y*begin_dx*begin_dy + -0.000152742 *begin_x*begin_y*begin_dy + -0.000255908 *lens_ipow(begin_x, 2)*begin_dx + -0.796098 *lens_ipow(begin_dx, 3) + -0.00187749 *begin_x*lens_ipow(begin_lambda, 2) + -0.566459 *begin_dx*lens_ipow(begin_dy, 2) + -1.35926e-06 *begin_x*lens_ipow(begin_y, 2) + -1.33617e-06 *lens_ipow(begin_x, 3) + -0.00886726 *begin_x*lens_ipow(begin_dy, 2) + -0.0284139 *begin_x*lens_ipow(begin_dx, 2) + -9.14481e-05 *lens_ipow(begin_y, 2)*begin_dx + -0.0728502 *begin_dx*lens_ipow(begin_lambda, 2) + 0.0832356 *begin_x*lens_ipow(begin_dx, 4) + 5.1049 *lens_ipow(begin_dx, 5) + -5.55409e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -4.81513e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 4) + -0.0198241 *begin_x*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + -0.722474 *begin_y*begin_dx*lens_ipow(begin_dy, 5) + 63.9208 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 4) + -3.83808e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + 0.0646751 *begin_x*lens_ipow(begin_dy, 6) + -0.0112359 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 4) + 68.7727 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 2)*begin_lambda + -0.0196597 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_dy*begin_lambda;
  pred_dy =  + -0.0101004 *begin_y + 0.457102 *begin_dy + 0.100435 *begin_dy*begin_lambda + 0.00269999 *begin_y*begin_lambda + -0.0087605 *begin_y*lens_ipow(begin_dx, 2) + -0.000254516 *lens_ipow(begin_y, 2)*begin_dy + -0.0280722 *begin_y*lens_ipow(begin_dy, 2) + -0.0172145 *begin_x*begin_dx*begin_dy + -0.000150274 *begin_x*begin_y*begin_dx + -0.549213 *lens_ipow(begin_dx, 2)*begin_dy + -0.00186489 *begin_y*lens_ipow(begin_lambda, 2) + -1.31223e-06 *lens_ipow(begin_x, 2)*begin_y + -0.0706918 *begin_dy*lens_ipow(begin_lambda, 2) + -1.34099e-06 *lens_ipow(begin_y, 3) + -9.3573e-05 *lens_ipow(begin_x, 2)*begin_dy + -0.777551 *lens_ipow(begin_dy, 3) + 4.95155 *lens_ipow(begin_dy, 5) + 0.0791229 *begin_y*lens_ipow(begin_dy, 4) + -5.21365e-06 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2) + -5.05379e-06 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + -0.0205986 *begin_x*begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 80.5278 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 3) + 4.78251e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 3)*begin_dy + 0.109555 *begin_y*lens_ipow(begin_dx, 6)*begin_lambda + -6.20975e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda + -0.021115 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4)*begin_lambda + 93.7051 *lens_ipow(begin_dx, 8)*begin_dy + 643.614 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 7)*begin_lambda;
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 70.0927  + 8.207 *begin_lambda + -0.306917 *begin_y*begin_dy + 0.0010317 *lens_ipow(begin_x, 2) + -137.525 *lens_ipow(begin_dx, 2) + -46.0844 *lens_ipow(begin_dy, 2) + -1.11609 *begin_x*begin_dx + 0.000992735 *lens_ipow(begin_y, 2) + -5.60491 *lens_ipow(begin_lambda, 2) + -0.0532438 *begin_x*begin_y*begin_dx*begin_dy + -15.0513 *begin_x*lens_ipow(begin_dx, 3) + -0.095421 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -10.5106 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + -606.09 *lens_ipow(begin_dx, 4) + -7.53354 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + -104.008 *lens_ipow(begin_dy, 4) + -0.0210866 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -2.95128 *begin_y*lens_ipow(begin_dy, 3) + -0.0430091 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.020339 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -704.526 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 3.98383e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)+0.0f;
  dx1_domega0(0, 1) =  + -0.306917 *begin_y*begin_dx + -92.1688 *begin_dx*begin_dy + -0.512046 *begin_x*begin_dy + -0.0266219 *begin_x*begin_y*lens_ipow(begin_dx, 2) + -3.50353 *begin_y*lens_ipow(begin_dx, 3) + -7.53354 *begin_x*lens_ipow(begin_dx, 2)*begin_dy + -416.033 *begin_dx*lens_ipow(begin_dy, 3) + -0.0421732 *lens_ipow(begin_y, 2)*begin_dx*begin_dy + -8.85384 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.040678 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + -469.684 *lens_ipow(begin_dx, 3)*begin_dy+0.0f;
  dx1_domega0(1, 0) =  + -0.549013 *begin_y*begin_dx + -104.115 *begin_dx*begin_dy + -1.88091 *begin_x*begin_dy*begin_lambda + 2.59627 *begin_x*begin_dy*lens_ipow(begin_lambda, 2) + -0.0240069 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + -5.77957 *begin_x*lens_ipow(begin_dx, 2)*begin_dy + -0.0101131 *begin_x*begin_y*lens_ipow(begin_dx, 2) + -231.084 *lens_ipow(begin_dx, 3)*begin_dy + 0.787701 *begin_x*begin_y*lens_ipow(begin_dy, 4) + -1.40302 *begin_x*begin_dy*lens_ipow(begin_lambda, 4) + 0.00887828 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3) + -12885.7 *begin_dx*lens_ipow(begin_dy, 7)+0.0f;
  dx1_domega0(1, 1) =  + 70.1796  + 8.1424 *begin_lambda + 0.000578186 *lens_ipow(begin_y, 2) + -1.2991 *begin_y*begin_dy + -52.0577 *lens_ipow(begin_dx, 2) + -5.55115 *lens_ipow(begin_lambda, 2) + 0.000744536 *lens_ipow(begin_x, 2) + -154.083 *lens_ipow(begin_dy, 2) + -1.88091 *begin_x*begin_dx*begin_lambda + 2.59627 *begin_x*begin_dx*lens_ipow(begin_lambda, 2) + -0.0120035 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -1.92652 *begin_x*lens_ipow(begin_dx, 3) + -57.7709 *lens_ipow(begin_dx, 4) + 3.1508 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 3) + -4790.2 *lens_ipow(begin_dy, 6) + -0.51122 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 4) + -1.40302 *begin_x*begin_dx*lens_ipow(begin_lambda, 4) + -1.0353 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 4) + -148.49 *begin_y*lens_ipow(begin_dy, 5) + 0.0266348 *begin_x*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -45099.8 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 6)+0.0f;
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
