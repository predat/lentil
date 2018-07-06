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
  __attribute__((unused)) const float begin_lambda = lambda;
  pred_x =  + 53.3813 *begin_dx + 0.154777 *begin_x + 0.261528 *begin_x*begin_lambda + 13.3025 *begin_dx*begin_lambda + -0.0224505 *begin_y*begin_dx*begin_dy + -33.5149 *lens_ipow(begin_dx, 3) + -0.179304 *begin_x*lens_ipow(begin_lambda, 2) + -33.3313 *begin_dx*lens_ipow(begin_dy, 2) + -0.000100913 *begin_x*lens_ipow(begin_y, 2) + -9.81196e-05 *lens_ipow(begin_x, 3) + -0.172202 *begin_x*lens_ipow(begin_dy, 2) + -0.194791 *begin_x*lens_ipow(begin_dx, 2) + -9.15742 *begin_dx*lens_ipow(begin_lambda, 2) + 0.00197297 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 0.00135443 *lens_ipow(begin_y, 2)*begin_dx*begin_lambda + 0.0128352 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + 0.272568 *begin_x*lens_ipow(begin_dx, 4) + 15.7349 *lens_ipow(begin_dx, 5) + 0.477671 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 14.5467 *begin_dx*lens_ipow(begin_dy, 4) + 0.262767 *begin_x*lens_ipow(begin_dy, 4) + 0.00455317 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -9.21041e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + 29.958 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2) + -0.000218375 *lens_ipow(begin_x, 2)*begin_y*begin_dx*begin_dy*begin_lambda + -0.0117472 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + -0.0109065 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + -6.45965e-13 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 4);
  pred_y =  + 0.154573 *begin_y + 53.3816 *begin_dy + 13.2961 *begin_dy*begin_lambda + 0.262502 *begin_y*begin_lambda + -0.172232 *begin_y*lens_ipow(begin_dx, 2) + -0.194729 *begin_y*lens_ipow(begin_dy, 2) + -0.0226905 *begin_x*begin_dx*begin_dy + -33.3032 *lens_ipow(begin_dx, 2)*begin_dy + -0.180011 *begin_y*lens_ipow(begin_lambda, 2) + -0.000101256 *lens_ipow(begin_x, 2)*begin_y + -9.14292 *begin_dy*lens_ipow(begin_lambda, 2) + -9.87738e-05 *lens_ipow(begin_y, 3) + -33.5367 *lens_ipow(begin_dy, 3) + 0.00136169 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 0.00197757 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.00437516 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_dy + -0.000123302 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 29.6641 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 0.262752 *begin_y*lens_ipow(begin_dx, 4) + 15.8211 *lens_ipow(begin_dy, 5) + 0.0125992 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + 0.27136 *begin_y*lens_ipow(begin_dy, 4) + 0.468323 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 14.5036 *lens_ipow(begin_dx, 4)*begin_dy + -8.73164e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + -0.0115973 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -0.0109593 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + -6.01224e-13 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 5);
  pred_dx =  + 0.400102 *begin_dx + -0.0177451 *begin_x + 0.0065151 *begin_x*begin_lambda + -0.00972886 *begin_y*begin_dx*begin_dy + 6.01178e-05 *begin_x*begin_y*begin_dy + 5.84495e-05 *lens_ipow(begin_x, 2)*begin_dx + -0.534959 *lens_ipow(begin_dx, 3) + -0.00455593 *begin_x*lens_ipow(begin_lambda, 2) + -0.512289 *begin_dx*lens_ipow(begin_dy, 2) + -2.82159e-06 *begin_x*lens_ipow(begin_y, 2) + -2.74954e-06 *lens_ipow(begin_x, 3) + -0.00566831 *begin_x*lens_ipow(begin_dy, 2) + -0.0142906 *begin_x*lens_ipow(begin_dx, 2) + -5.6025e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 0.143072 *lens_ipow(begin_dx, 5) + 0.00399362 *begin_x*lens_ipow(begin_dy, 4) + 0.473233 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 2)*begin_lambda + 7.27853e-09 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_lambda + -1.44085e-08 *begin_x*lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 2) + 3.97335e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dy + -0.028671 *begin_y*begin_dx*lens_ipow(begin_dy, 5) + -2.94065e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_dx, 2) + 4.03772e-10 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 2)*begin_dx + 0.00151553 *begin_x*begin_y*lens_ipow(begin_dx, 4)*begin_dy + -0.0246004 *begin_x*lens_ipow(begin_dx, 6)*begin_lambda + -1.79423e-11 *lens_ipow(begin_x, 7)*lens_ipow(begin_dy, 2) + -0.000274599 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3) + 7.23344e-11 *lens_ipow(begin_x, 7)*lens_ipow(begin_dx, 2)*begin_lambda;
  pred_dy =  + -0.0177516 *begin_y + 0.400086 *begin_dy + 0.00653363 *begin_y*begin_lambda + -0.00564628 *begin_y*lens_ipow(begin_dx, 2) + 5.81312e-05 *lens_ipow(begin_y, 2)*begin_dy + -0.0142844 *begin_y*lens_ipow(begin_dy, 2) + -0.00974129 *begin_x*begin_dx*begin_dy + 5.99651e-05 *begin_x*begin_y*begin_dx + -0.5118 *lens_ipow(begin_dx, 2)*begin_dy + -0.00456705 *begin_y*lens_ipow(begin_lambda, 2) + -2.83229e-06 *lens_ipow(begin_x, 2)*begin_y + -2.7451e-06 *lens_ipow(begin_y, 3) + -0.53431 *lens_ipow(begin_dy, 3) + 0.00412116 *begin_y*lens_ipow(begin_dx, 4) + 0.140168 *lens_ipow(begin_dy, 5) + -5.61012e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 0.464705 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3)*begin_lambda + 7.28792e-09 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + -1.31855e-08 *lens_ipow(begin_x, 4)*begin_y*lens_ipow(begin_dy, 2) + -5.68574e-09 *lens_ipow(begin_y, 5)*lens_ipow(begin_dx, 2) + -2.94733e-08 *lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 2) + 4.00332e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 3)*begin_dx + 0.00154966 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4) + 4.16278e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dy + -0.0286077 *begin_x*lens_ipow(begin_dx, 5)*begin_dy + -0.025514 *begin_y*lens_ipow(begin_dy, 6)*begin_lambda + -0.00026292 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3) + 7.09145e-11 *lens_ipow(begin_y, 7)*lens_ipow(begin_dy, 2)*begin_lambda;
  float dx1_domega0[2][2];
  dx1_domega0[0][0] =  + 53.3813  + 13.3025 *begin_lambda + -0.0224505 *begin_y*begin_dy + -100.545 *lens_ipow(begin_dx, 2) + -33.3313 *lens_ipow(begin_dy, 2) + -0.389581 *begin_x*begin_dx + -9.15742 *lens_ipow(begin_lambda, 2) + 0.00197297 *lens_ipow(begin_x, 2)*begin_lambda + 0.00135443 *lens_ipow(begin_y, 2)*begin_lambda + 0.0256703 *begin_x*begin_y*begin_dx*begin_dy + 1.09027 *begin_x*lens_ipow(begin_dx, 3) + 78.6746 *lens_ipow(begin_dx, 4) + 0.955343 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + 14.5467 *lens_ipow(begin_dy, 4) + 0.00455317 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -0.000184208 *lens_ipow(begin_x, 3)*begin_dx + 89.8741 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.000218375 *lens_ipow(begin_x, 2)*begin_y*begin_dy*begin_lambda + -0.0117472 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -0.0327196 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2)+0.0f;
  dx1_domega0[0][1] =  + -0.0224505 *begin_y*begin_dx + -66.6625 *begin_dx*begin_dy + -0.344403 *begin_x*begin_dy + 0.0128352 *begin_x*begin_y*lens_ipow(begin_dx, 2) + 0.955343 *begin_x*lens_ipow(begin_dx, 2)*begin_dy + 58.1867 *begin_dx*lens_ipow(begin_dy, 3) + 1.05107 *begin_x*lens_ipow(begin_dy, 3) + 0.00910634 *lens_ipow(begin_y, 2)*begin_dx*begin_dy + 59.916 *lens_ipow(begin_dx, 3)*begin_dy + -0.000218375 *lens_ipow(begin_x, 2)*begin_y*begin_dx*begin_lambda + -0.0234945 *lens_ipow(begin_x, 2)*begin_dx*begin_dy*begin_lambda+0.0f;
  dx1_domega0[1][0] =  + -0.344465 *begin_y*begin_dx + -0.0226905 *begin_x*begin_dy + -66.6064 *begin_dx*begin_dy + 0.00875033 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + -0.000123302 *begin_x*lens_ipow(begin_y, 2)*begin_dy + 59.3282 *begin_dx*lens_ipow(begin_dy, 3) + 1.05101 *begin_y*lens_ipow(begin_dx, 3) + 0.0125992 *begin_x*begin_y*lens_ipow(begin_dy, 2) + 0.936647 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + 58.0145 *lens_ipow(begin_dx, 3)*begin_dy + -0.0231946 *lens_ipow(begin_y, 2)*begin_dx*begin_dy*begin_lambda+0.0f;
  dx1_domega0[1][1] =  + 53.3816  + 13.2961 *begin_lambda + -0.389458 *begin_y*begin_dy + -0.0226905 *begin_x*begin_dx + -33.3032 *lens_ipow(begin_dx, 2) + -9.14292 *lens_ipow(begin_lambda, 2) + -100.61 *lens_ipow(begin_dy, 2) + 0.00136169 *lens_ipow(begin_x, 2)*begin_lambda + 0.00197757 *lens_ipow(begin_y, 2)*begin_lambda + 0.00437516 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -0.000123302 *begin_x*lens_ipow(begin_y, 2)*begin_dx + 88.9923 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 79.1057 *lens_ipow(begin_dy, 4) + 0.0251984 *begin_x*begin_y*begin_dx*begin_dy + 1.08544 *begin_y*lens_ipow(begin_dy, 3) + 0.936647 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + 14.5036 *lens_ipow(begin_dx, 4) + -0.000174633 *lens_ipow(begin_y, 3)*begin_dy + -0.0115973 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -0.032878 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2)+0.0f;
  float invJ[2][2];
  const float invdet = 1.0f/(dx1_domega0[0][0]*dx1_domega0[1][1] - dx1_domega0[0][1]*dx1_domega0[1][0]);
  invJ[0][0] =  dx1_domega0[1][1]*invdet;
  invJ[1][1] =  dx1_domega0[0][0]*invdet;
  invJ[0][1] = -dx1_domega0[0][1]*invdet;
  invJ[1][0] = -dx1_domega0[1][0]*invdet;
  const float dx1[2] = {out_x - pred_x, out_y - pred_y};
  for(int i=0;i<2;i++)
  {
    dx += invJ[0][i]*dx1[i];
    dy += invJ[1][i]*dx1[i];
  }
  sqr_err = dx1[0]*dx1[0] + dx1[1]*dx1[1];
}
out_dx = pred_dx;
out_dy = pred_dy;
