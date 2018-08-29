case cooke_anamorphic_1954_100mm:
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
  pred_x =  + 45.8346 *begin_dx + 0.072029 *begin_x + 10.5615 *begin_y*begin_dx*begin_dy + 0.230691 *begin_x*begin_y*begin_dy + 0.0018659 *begin_x*lens_ipow(begin_y, 2) + 1.15105 *begin_x*lens_ipow(begin_dx, 2) + 0.0862307 *lens_ipow(begin_y, 2)*begin_dx + 3.19087 *begin_x*lens_ipow(begin_dx, 2)*begin_lambda + 18.7122 *begin_x*lens_ipow(begin_dy, 2)*begin_lambda + 0.0202041 *begin_x*lens_ipow(begin_lambda, 3) + 0.144219 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 591.545 *begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 4.87128e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + 70.1906 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + 0.00471506 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 2) + 0.0393111 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -9.73852e-07 *begin_x*lens_ipow(begin_y, 4) + 0.000853952 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + -15.758 *begin_x*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 0.51985 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + -545.774 *begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3) + -0.0902823 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 3) + -0.00518424 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 3) + 264.939 *lens_ipow(begin_dx, 5)*begin_lambda + 4.60888e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + -0.713043 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + 0.000550574 *lens_ipow(begin_x, 4)*begin_dx*lens_ipow(begin_lambda, 3) + 1.08044e-05 *lens_ipow(begin_x, 5)*lens_ipow(begin_lambda, 5);
  pred_y =  + 110.39 *begin_dy + -32.8199 *begin_dy*begin_lambda + -0.120491 *begin_y*begin_lambda + 0.328465 *lens_ipow(begin_y, 2)*begin_dy + 15.961 *begin_y*lens_ipow(begin_dy, 2) + 18.2262 *begin_dy*lens_ipow(begin_lambda, 2) + 0.0018724 *lens_ipow(begin_y, 3) + 315.616 *lens_ipow(begin_dy, 3) + 17.125 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + 1080.62 *lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 0.496503 *lens_ipow(begin_x, 2)*begin_dy*begin_lambda + 0.754668 *begin_x*begin_y*begin_dx*begin_lambda + 46.4296 *begin_x*begin_dx*begin_dy*begin_lambda + 0.00822273 *lens_ipow(begin_x, 2)*begin_y*begin_lambda + 0.0160401 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.0037117 *begin_x*lens_ipow(begin_y, 3)*begin_dx + 3.39255e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 0.0938072 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + -2.27782e-06 *lens_ipow(begin_y, 5) + -0.141639 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*begin_lambda + -0.00598473 *begin_x*lens_ipow(begin_y, 3)*begin_dx*begin_lambda + -6.31412e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + 0.246662 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 0.00102745 *lens_ipow(begin_y, 4)*begin_dy*lens_ipow(begin_lambda, 2) + 0.0270785 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 0.000504414 *lens_ipow(begin_x, 3)*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + 17.9584 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 3) + 0.00123881 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 6);
  pred_dx =  + -1.17521 *begin_dx + -0.0233336 *begin_x + -0.00138497 *begin_x*begin_lambda + 0.0183302 *begin_y*begin_dx*begin_dy + -0.000104767 *begin_x*begin_y*begin_dy + -0.00104845 *lens_ipow(begin_x, 2)*begin_dx + 0.000961846 *begin_x*lens_ipow(begin_lambda, 2) + -0.571159 *begin_dx*lens_ipow(begin_dy, 2) + -1.91372e-06 *begin_x*lens_ipow(begin_y, 2) + -8.59526e-06 *lens_ipow(begin_x, 3) + -0.01779 *begin_x*lens_ipow(begin_dy, 2) + -0.0513223 *begin_x*lens_ipow(begin_dx, 2) + -0.000181317 *lens_ipow(begin_y, 2)*begin_dx + -0.68921 *lens_ipow(begin_dx, 3)*begin_lambda + -0.0677653 *begin_x*lens_ipow(begin_dx, 4) + 0.00273162 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 0.573932 *begin_y*lens_ipow(begin_dx, 3)*begin_dy*begin_lambda + -0.000256885 *lens_ipow(begin_x, 2)*begin_y*begin_dx*begin_dy*begin_lambda + 8.3075e-07 *lens_ipow(begin_y, 4)*begin_dx*begin_lambda + 4.8098e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2)*begin_lambda + 3.67658e-09 *lens_ipow(begin_x, 6)*begin_dx + 0.586614 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 4) + 8.15782e-11 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2) + 5.50543e-11 *lens_ipow(begin_x, 7) + -0.0117032 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 5)*begin_lambda + 2.57609e-10 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 4)*begin_lambda + 3.80447e-13 *begin_x*lens_ipow(begin_y, 8)*begin_lambda + 1.64792e-09 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*begin_dy;
  pred_dy =  + -0.00986932 *begin_y + 1.00882 *begin_dy + -0.319099 *begin_dy*begin_lambda + -0.00135389 *begin_y*begin_lambda + 0.113656 *begin_y*lens_ipow(begin_dx, 2) + 0.00455708 *lens_ipow(begin_y, 2)*begin_dy + 0.201375 *begin_y*lens_ipow(begin_dy, 2) + 0.00483743 *begin_x*begin_y*begin_dx + 5.22289e-05 *lens_ipow(begin_x, 2)*begin_y + 2.4617e-05 *lens_ipow(begin_y, 3) + 7.52329 *lens_ipow(begin_dy, 3)*begin_lambda + 7.17245e-06 *begin_x*lens_ipow(begin_y, 3)*begin_dx + 0.000303314 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2) + 0.000494426 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 53.3221 *lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 4) + -0.0651731 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.00252462 *begin_x*lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 2) + 0.0234421 *lens_ipow(begin_x, 2)*begin_dy*lens_ipow(begin_lambda, 4) + 2.25606 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 4) + -4.18588e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*begin_lambda + -2.82019e-10 *lens_ipow(begin_y, 7)*begin_lambda + 69.7216 *lens_ipow(begin_x, 3)*begin_dx*lens_ipow(begin_dy, 5) + 1.08925 *lens_ipow(begin_x, 4)*lens_ipow(begin_dy, 5) + 70.3648 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5) + 3.19115 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5) + 0.0392339 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5) + -65.6363 *lens_ipow(begin_x, 4)*lens_ipow(begin_dy, 7) + 260696 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 7);
  float dx1_domega0[2][2];
  dx1_domega0[0][0] =  + 45.8346  + 10.5615 *begin_y*begin_dy + 2.3021 *begin_x*begin_dx + 0.0862307 *lens_ipow(begin_y, 2) + 6.38174 *begin_x*begin_dx*begin_lambda + 0.144219 *lens_ipow(begin_x, 2)*begin_lambda + 591.545 *lens_ipow(begin_dy, 2)*begin_lambda + 210.572 *lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 0.0786222 *begin_x*lens_ipow(begin_y, 2)*begin_dx + 0.000853952 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 1.55955 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -545.774 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3) + -0.0902823 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 3) + 1324.69 *lens_ipow(begin_dx, 4)*begin_lambda + 4.60888e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dy + -2.13913 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + 0.000550574 *lens_ipow(begin_x, 4)*lens_ipow(begin_lambda, 3)+0.0f;
  dx1_domega0[0][1] =  + 10.5615 *begin_y*begin_dx + 0.230691 *begin_x*begin_y + 37.4244 *begin_x*begin_dy*begin_lambda + 1183.09 *begin_dx*begin_dy*begin_lambda + -31.516 *begin_x*begin_dy*lens_ipow(begin_lambda, 2) + -1091.55 *begin_dx*begin_dy*lens_ipow(begin_lambda, 3) + 4.60888e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx+0.0f;
  dx1_domega0[1][0] =  + 34.2501 *begin_y*begin_dx*begin_lambda + 2161.23 *begin_dx*begin_dy*begin_lambda + 0.754668 *begin_x*begin_y*begin_lambda + 46.4296 *begin_x*begin_dy*begin_lambda + 0.0160401 *begin_x*lens_ipow(begin_y, 2)*begin_dy + 0.0037117 *begin_x*lens_ipow(begin_y, 3) + 0.187614 *lens_ipow(begin_y, 3)*begin_dx + -0.283278 *lens_ipow(begin_y, 3)*begin_dx*begin_lambda + -0.00598473 *begin_x*lens_ipow(begin_y, 3)*begin_lambda + 0.054157 *lens_ipow(begin_x, 2)*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + 0.000504414 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_lambda, 2)+0.0f;
  dx1_domega0[1][1] =  + 110.39  + -32.8199 *begin_lambda + 0.328465 *lens_ipow(begin_y, 2) + 31.922 *begin_y*begin_dy + 18.2262 *lens_ipow(begin_lambda, 2) + 946.849 *lens_ipow(begin_dy, 2) + 1080.62 *lens_ipow(begin_dx, 2)*begin_lambda + 0.496503 *lens_ipow(begin_x, 2)*begin_lambda + 46.4296 *begin_x*begin_dx*begin_lambda + 0.0160401 *begin_x*lens_ipow(begin_y, 2)*begin_dx + 0.493323 *lens_ipow(begin_y, 3)*begin_dy*lens_ipow(begin_lambda, 2) + 0.00102745 *lens_ipow(begin_y, 4)*lens_ipow(begin_lambda, 2) + 53.8753 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3)+0.0f;
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
} break;