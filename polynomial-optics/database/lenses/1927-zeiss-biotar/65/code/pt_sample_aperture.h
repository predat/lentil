case zeiss__biotar__1927__65mm:
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
  pred_x =  + 39.4502 *begin_dx + 0.436185 *begin_x + 8.11669 *begin_dx*begin_lambda + 0.160606 *begin_x*begin_lambda + -5.58295 *begin_dx*lens_ipow(begin_lambda, 2) + -25.246 *begin_dx*lens_ipow(begin_dy, 2) + -24.9338 *lens_ipow(begin_dx, 3) + -0.212154 *begin_y*begin_dx*begin_dy + -0.000617063 *lens_ipow(begin_y, 2)*begin_dx + -0.111298 *begin_x*lens_ipow(begin_lambda, 2) + -0.211338 *begin_x*lens_ipow(begin_dy, 2) + -0.398444 *begin_x*lens_ipow(begin_dx, 2) + -0.0050129 *begin_x*begin_y*begin_dy + -0.000136241 *begin_x*lens_ipow(begin_y, 2) + -0.00297618 *lens_ipow(begin_x, 2)*begin_dx + -9.81026e-05 *lens_ipow(begin_x, 3) + -0.412554 *begin_y*begin_dx*lens_ipow(begin_dy, 3) + 0.0300327 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -1.28394e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -0.00044426 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + -1.44832e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -1.49361e-05 *lens_ipow(begin_x, 4)*begin_dx + -1.69963e-07 *lens_ipow(begin_x, 5) + -1.9154e-05 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 3) + 4.8303 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 4) + -7.19451e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4) + -6.26792e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy*begin_lambda + -0.00772907 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2);
  pred_y =  + 39.44 *begin_dy + 0.435502 *begin_y + 8.11557 *begin_dy*begin_lambda + 0.162013 *begin_y*begin_lambda + -5.54718 *begin_dy*lens_ipow(begin_lambda, 2) + -24.7458 *lens_ipow(begin_dy, 3) + -25.7148 *lens_ipow(begin_dx, 2)*begin_dy + -0.111377 *begin_y*lens_ipow(begin_lambda, 2) + -0.394523 *begin_y*lens_ipow(begin_dy, 2) + -0.208154 *begin_y*lens_ipow(begin_dx, 2) + -0.00306299 *lens_ipow(begin_y, 2)*begin_dy + -9.98872e-05 *lens_ipow(begin_y, 3) + -0.232228 *begin_x*begin_dx*begin_dy + -0.00501307 *begin_x*begin_y*begin_dx + -0.000656839 *lens_ipow(begin_x, 2)*begin_dy + -0.000136724 *lens_ipow(begin_x, 2)*begin_y + -0.000444284 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + -1.45394e-05 *lens_ipow(begin_y, 4)*begin_dy + -1.66671e-07 *lens_ipow(begin_y, 5) + 0.0338453 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.00451619 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + 0.0192562 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_dy + -1.20764e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + -1.40737e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 0.000249073 *lens_ipow(begin_x, 3)*begin_dx*begin_dy + -3.09181e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dx + -6.81701e-10 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3) + 0.015057 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 2);
  pred_dx =  + 0.48548 *begin_dx + -0.0199974 *begin_x + -0.0309548 *begin_dx*begin_lambda + 0.00539553 *begin_x*begin_lambda + -0.424269 *begin_dx*lens_ipow(begin_dy, 2) + -0.402326 *lens_ipow(begin_dx, 3) + -0.0155243 *begin_y*begin_dx*begin_dy + -0.000110186 *lens_ipow(begin_y, 2)*begin_dx + -0.00394961 *begin_x*lens_ipow(begin_lambda, 2) + -0.00804161 *begin_x*lens_ipow(begin_dy, 2) + -0.0222548 *begin_x*lens_ipow(begin_dx, 2) + -0.000129883 *begin_x*begin_y*begin_dy + -6.72612e-06 *begin_x*lens_ipow(begin_y, 2) + -7.45764e-06 *lens_ipow(begin_x, 3) + -0.000796295 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 1.25412 *begin_dx*lens_ipow(begin_dy, 4) + 2.4792 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + 1.04832 *lens_ipow(begin_dx, 5) + -1.28133e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -4.64778e-09 *begin_x*lens_ipow(begin_y, 4) + 0.000619248 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -2.15476e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 0.00058463 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 2.48743e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + 4.43286e-08 *lens_ipow(begin_x, 4)*begin_y*begin_dx*begin_dy + -1.96817e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_dy, 2) + -9.62803e-12 *lens_ipow(begin_x, 7) + -1.07531e-13 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 4)*begin_lambda;
  pred_dy =  + 0.474235 *begin_dy + -0.020169 *begin_y + -0.0182927 *begin_dy*begin_lambda + 0.00586381 *begin_y*begin_lambda + -0.28557 *lens_ipow(begin_dy, 3) + -0.246715 *lens_ipow(begin_dx, 2)*begin_dy + -0.0042176 *begin_y*lens_ipow(begin_lambda, 2) + -0.0222349 *begin_y*lens_ipow(begin_dy, 2) + -0.00811379 *begin_y*lens_ipow(begin_dx, 2) + -7.08346e-06 *lens_ipow(begin_y, 3) + -0.014449 *begin_x*begin_dx*begin_dy + -0.000128769 *begin_x*begin_y*begin_dx + -7.64912e-06 *lens_ipow(begin_x, 2)*begin_y + -0.000730958 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + -0.000180076 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 0.000526413 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -3.54246e-09 *lens_ipow(begin_y, 5) + 0.000608733 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*begin_lambda + 3.00342 *lens_ipow(begin_dy, 7) + 10.2856 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 5) + -2.14964e-08 *lens_ipow(begin_y, 5)*lens_ipow(begin_dx, 2) + -2.35459e-11 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 5) + -4.17048e-11 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3) + -1.38807e-07 *lens_ipow(begin_x, 4)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + -2.61658e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 85.3508 *lens_ipow(begin_dx, 6)*lens_ipow(begin_dy, 3) + -0.000336123 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 3)*begin_dy*lens_ipow(begin_lambda, 3) + -1.11218e-11 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 5)*begin_dx*lens_ipow(begin_lambda, 2);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 39.4502  + 8.11669 *begin_lambda + -5.58295 *lens_ipow(begin_lambda, 2) + -25.246 *lens_ipow(begin_dy, 2) + -74.8015 *lens_ipow(begin_dx, 2) + -0.212154 *begin_y*begin_dy + -0.000617063 *lens_ipow(begin_y, 2) + -0.796887 *begin_x*begin_dx + -0.00297618 *lens_ipow(begin_x, 2) + -0.412554 *begin_y*lens_ipow(begin_dy, 3) + 0.0600655 *begin_x*begin_y*begin_dx*begin_dy + -1.28394e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -0.00088852 *lens_ipow(begin_x, 3)*begin_dx + -1.49361e-05 *lens_ipow(begin_x, 4) + -5.7462e-05 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2) + 9.6606 *begin_x*begin_dx*lens_ipow(begin_dy, 4) + -0.0154581 *begin_x*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2)+0.0f;
  dx1_domega0(0, 1) =  + -50.4921 *begin_dx*begin_dy + -0.212154 *begin_y*begin_dx + -0.422675 *begin_x*begin_dy + -0.0050129 *begin_x*begin_y + -1.23766 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + 0.0300327 *begin_x*begin_y*lens_ipow(begin_dx, 2) + 19.3212 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + -6.26792e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_lambda + -0.0154581 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 2)+0.0f;
  dx1_domega0(1, 0) =  + -51.4296 *begin_dx*begin_dy + -0.416308 *begin_y*begin_dx + -0.232228 *begin_x*begin_dy + -0.00501307 *begin_x*begin_y + 0.0338453 *begin_x*begin_y*lens_ipow(begin_dy, 2) + 0.0385124 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + 0.000249073 *lens_ipow(begin_x, 3)*begin_dy + -3.09181e-08 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3) + 0.0602278 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2)+0.0f;
  dx1_domega0(1, 1) =  + 39.44  + 8.11557 *begin_lambda + -5.54718 *lens_ipow(begin_lambda, 2) + -74.2373 *lens_ipow(begin_dy, 2) + -25.7148 *lens_ipow(begin_dx, 2) + -0.789046 *begin_y*begin_dy + -0.00306299 *lens_ipow(begin_y, 2) + -0.232228 *begin_x*begin_dx + -0.000656839 *lens_ipow(begin_x, 2) + -0.000888568 *lens_ipow(begin_y, 3)*begin_dy + -1.45394e-05 *lens_ipow(begin_y, 4) + 0.0676905 *begin_x*begin_y*begin_dx*begin_dy + -0.0135486 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + 0.0192562 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -1.20764e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 0.000249073 *lens_ipow(begin_x, 3)*begin_dx + 0.0301139 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 4)*begin_dy+0.0f;
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
