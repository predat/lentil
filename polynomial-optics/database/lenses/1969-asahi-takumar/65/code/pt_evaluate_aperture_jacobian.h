case asahi__takumar__1969__65mm:
{
const double dx00 =  + 0.334219  + 0.188519 *lambda + -0.130241 *lens_ipow(lambda, 2) + -0.165402 *lens_ipow(dy, 2) + -0.275309 *lens_ipow(dx, 2) + 0.00123938 *y*dy + -8.73446e-05 *lens_ipow(y, 2) + 0.00566031 *x*dx + -0.000227312 *lens_ipow(x, 2) + 0.245526 *lens_ipow(dy, 4) + -0.0191287 *x*dx*lens_ipow(dy, 2) + -2.84812e-07 *lens_ipow(x, 4) + 0.134774 *y*lens_ipow(dx, 4)*dy + -1.94001e-09 *lens_ipow(x, 2)*lens_ipow(y, 4) + 6.71248e-12 *lens_ipow(x, 2)*lens_ipow(y, 6)*lens_ipow(lambda, 2)+0.0f;
const double dx01 =  + -0.132458 *dx*dy + 0.00318827 *y*dx + 0.00123938 *x*dy + -0.000174689 *x*y + -0.279459 *dx*lens_ipow(dy, 3) + -0.0131756 *y*lens_ipow(dx, 3) + 0.134774 *x*lens_ipow(dx, 4)*dy + -2.58668e-09 *lens_ipow(x, 3)*lens_ipow(y, 3) + 1.3425e-11 *lens_ipow(x, 3)*lens_ipow(y, 5)*lens_ipow(lambda, 2)+0.0f;
const double dx02 =  + 39.5196  + 8.04654 *lambda + -5.51125 *lens_ipow(lambda, 2) + -22.768 *lens_ipow(dy, 2) + -67.6254 *lens_ipow(dx, 2) + -0.132458 *y*dy + 0.00159413 *lens_ipow(y, 2) + -0.550617 *x*dx + 0.00283016 *lens_ipow(x, 2) + -0.279459 *y*lens_ipow(dy, 3) + -0.0197634 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.00956435 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 0.539097 *x*y*lens_ipow(dx, 3)*dy+0.0f;
const double dx03 =  + -45.5359 *dx*dy + -0.132458 *y*dx + -0.330805 *x*dy + 0.00123938 *x*y + -0.838377 *y*dx*lens_ipow(dy, 2) + 0.982105 *x*lens_ipow(dy, 3) + -0.0191287 *lens_ipow(x, 2)*dx*dy + 0.134774 *x*y*lens_ipow(dx, 4)+0.0f;
const double dx04 =  + 8.04654 *dx + 0.188519 *x + -11.0225 *dx*lambda + -0.260481 *x*lambda + 4.47498e-12 *lens_ipow(x, 3)*lens_ipow(y, 6)*lambda+0.0f;
const double dx10 =  + -0.141509 *dx*dy + 0.00125947 *y*dx + -0.000189049 *x*y + 0.00576136 *x*dy*lambda + 0.12234 *y*dx*lens_ipow(dy, 4) + -0.0431094 *x*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + -37.7425 *lens_ipow(dx, 5)*lens_ipow(dy, 3) + -1.33717e-11 *lens_ipow(x, 3)*lens_ipow(y, 5) + 1.34883e-11 *lens_ipow(x, 3)*lens_ipow(y, 5)*lambda+0.0f;
const double dx11 =  + 0.336227  + 0.18659 *lambda + -0.128843 *lens_ipow(lambda, 2) + -0.278117 *lens_ipow(dy, 2) + -0.164536 *lens_ipow(dx, 2) + 0.00554843 *y*dy + -0.000284986 *lens_ipow(y, 2) + 0.00125947 *x*dx + -9.45247e-05 *lens_ipow(x, 2) + 0.247988 *lens_ipow(dx, 4) + -0.0173142 *y*lens_ipow(dx, 2)*dy + 0.12234 *x*dx*lens_ipow(dy, 4) + -1.67146e-11 *lens_ipow(x, 4)*lens_ipow(y, 4) + 1.68604e-11 *lens_ipow(x, 4)*lens_ipow(y, 4)*lambda+0.0f;
const double dx12 =  + -45.5767 *dx*dy + -0.329073 *y*dx + -0.141509 *x*dy + 0.00125947 *x*y + 0.991952 *y*lens_ipow(dx, 3) + -0.0173142 *lens_ipow(y, 2)*dx*dy + 0.12234 *x*y*lens_ipow(dy, 4) + -188.712 *x*lens_ipow(dx, 4)*lens_ipow(dy, 3)+0.0f;
const double dx13 =  + 39.7272  + 7.57255 *lambda + -5.22297 *lens_ipow(lambda, 2) + -70.3608 *lens_ipow(dy, 2) + -22.7883 *lens_ipow(dx, 2) + -0.556234 *y*dy + 0.00277422 *lens_ipow(y, 2) + -0.141509 *x*dx + 0.00288068 *lens_ipow(x, 2)*lambda + -0.00865712 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 38.9508 *lens_ipow(dy, 4)*lambda + 0.489359 *x*y*dx*lens_ipow(dy, 3) + -0.0646641 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -113.227 *x*lens_ipow(dx, 5)*lens_ipow(dy, 2)+0.0f;
const double dx14 =  + 7.57255 *dy + 0.18659 *y + -10.4459 *dy*lambda + -0.257687 *y*lambda + 0.00288068 *lens_ipow(x, 2)*dy + 7.79017 *lens_ipow(dy, 5) + -0.0431094 *lens_ipow(x, 2)*lens_ipow(dy, 3)*lambda + 3.37208e-12 *lens_ipow(x, 4)*lens_ipow(y, 5)+0.0f;
const double dx20 =  + -0.0224734  + 0.00686869 *lambda + -0.0048578 *lens_ipow(lambda, 2) + -0.0102079 *lens_ipow(dy, 2) + -0.0282913 *lens_ipow(dx, 2) + -6.3053e-06 *lens_ipow(y, 2) + -0.000398956 *x*dx + -1.95006e-05 *lens_ipow(x, 2) + -0.000132909 *y*dy*lambda + 2.73916e-05 *x*y*dx*dy + -3.09974e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + 1.47628e-06 *lens_ipow(x, 3)*dx + -0.0577127 *lens_ipow(dx, 4)*lambda + -0.00271386 *x*lens_ipow(dx, 3)*lambda + 3.97841e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + -0.00142823 *y*lens_ipow(dy, 5) + 3.28647e-09 *x*lens_ipow(y, 4)*dx + 6.86395e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy*lambda+0.0f;
const double dx21 =  + -0.0197984 *dx*dy + -0.000166461 *y*dx + -1.26106e-05 *x*y + -0.000132909 *x*dy*lambda + 1.36958e-05 *lens_ipow(x, 2)*dx*dy + -2.06649e-08 *lens_ipow(x, 3)*y + 2.65228e-08 *lens_ipow(x, 3)*y*lambda + -0.00142823 *x*lens_ipow(dy, 5) + 6.57294e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -0.477014 *lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda + 6.86395e-09 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy*lambda+0.0f;
const double dx22 =  + 0.35483  + -0.677992 *lens_ipow(dy, 2) + -2.06819 *lens_ipow(dx, 2) + -0.0197984 *y*dy + -8.32307e-05 *lens_ipow(y, 2) + -0.0565826 *x*dx + -0.000199478 *lens_ipow(x, 2) + 1.36958e-05 *lens_ipow(x, 2)*y*dy + 3.6907e-07 *lens_ipow(x, 4) + -0.230851 *x*lens_ipow(dx, 3)*lambda + -0.0040708 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lambda + 1.64324e-09 *lens_ipow(x, 2)*lens_ipow(y, 4) + -1.43104 *y*lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx23 =  + -1.35598 *dx*dy + -0.0197984 *y*dx + -0.0204159 *x*dy + -0.000132909 *x*y*lambda + 1.36958e-05 *lens_ipow(x, 2)*y*dx + -0.00714117 *x*y*lens_ipow(dy, 4) + -1.43104 *y*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + 2.28798e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*lambda+0.0f;
const double dx24 =  + 0.00686869 *x + -0.00971559 *x*lambda + -0.000132909 *x*y*dy + -0.0577127 *x*lens_ipow(dx, 4) + -0.00135693 *lens_ipow(x, 2)*lens_ipow(dx, 3) + 1.32614e-08 *lens_ipow(x, 3)*lens_ipow(y, 2) + -0.477014 *y*lens_ipow(dx, 3)*lens_ipow(dy, 3) + 2.28798e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy+0.0f;
const double dx30 =  + -0.0199397 *dx*dy + -0.000160816 *x*dy + -1.23618e-05 *x*y + -0.000132546 *y*dx*lambda + -0.000286664 *y*lens_ipow(dx, 3) + -1.32036e-08 *x*lens_ipow(y, 3) + 0.000144495 *lens_ipow(y, 2)*dx*lens_ipow(dy, 3) + 3.13178e-09 *x*lens_ipow(y, 4)*dy + 7.85033e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*lambda + -2.81569 *lens_ipow(dx, 3)*lens_ipow(dy, 5) + 1.04957e-10 *x*lens_ipow(y, 5)*lens_ipow(lambda, 2) + -2.37937e-12 *lens_ipow(x, 7)*y*lens_ipow(dy, 2)+0.0f;
const double dx31 =  + -0.0226233  + 0.00721661 *lambda + -0.00514031 *lens_ipow(lambda, 2) + -0.0303871 *lens_ipow(dy, 2) + -0.0103029 *lens_ipow(dx, 2) + -0.000345063 *y*dy + -1.58619e-05 *lens_ipow(y, 2) + -6.18092e-06 *lens_ipow(x, 2) + -0.000132546 *x*dx*lambda + -2.34504e-08 *lens_ipow(y, 4) + -0.000286664 *x*lens_ipow(dx, 3) + -1.98054e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + 0.00028899 *x*y*dx*lens_ipow(dy, 3) + 6.26356e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + 7.85033e-09 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*lambda + 2.62392e-10 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(lambda, 2) + -2.97422e-13 *lens_ipow(x, 8)*lens_ipow(dy, 2)+0.0f;
const double dx32 =  + -1.35844 *dx*dy + -0.0206058 *y*dx + -0.0199397 *x*dy + -0.000132546 *x*y*lambda + -0.000859992 *x*y*lens_ipow(dx, 2) + 0.000144495 *x*lens_ipow(y, 2)*lens_ipow(dy, 3) + 2.61678e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*lambda + -8.44707 *x*lens_ipow(dx, 2)*lens_ipow(dy, 5)+0.0f;
const double dx33 =  + 0.355267  + -2.16473 *lens_ipow(dy, 2) + -0.679221 *lens_ipow(dx, 2) + -0.0607741 *y*dy + -0.000172531 *lens_ipow(y, 2) + -0.0199397 *x*dx + -8.04082e-05 *lens_ipow(x, 2) + 0.000433485 *x*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + 1.56589e-09 *lens_ipow(x, 2)*lens_ipow(y, 4) + 17.27 *lens_ipow(dy, 6)*lambda + -14.0784 *x*lens_ipow(dx, 3)*lens_ipow(dy, 4) + -5.94844e-13 *lens_ipow(x, 8)*y*dy+0.0f;
const double dx34 =  + 0.00721661 *y + -0.0102806 *y*lambda + -0.000132546 *x*y*dx + 2.46714 *lens_ipow(dy, 7) + 2.61678e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx + 1.04957e-10 *lens_ipow(x, 2)*lens_ipow(y, 5)*lambda+0.0f;
const double dx40 =  + -0.0064607 *dx*lens_ipow(dy, 2) + -0.00689077 *lens_ipow(dx, 3) + 8.1139e-07 *lens_ipow(y, 2)*dx + -0.000112151 *x*lens_ipow(dx, 2) + 1.82972e-06 *x*y*dy + -2.52577e-08 *lens_ipow(x, 3) + -0.00193652 *x*lens_ipow(dy, 6) + -0.184305 *lens_ipow(dx, 9) + 0.133935 *y*lens_ipow(dx, 5)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx41 =  + -3.3912e-06 *y + -0.00694601 *lens_ipow(dy, 3) + -0.00614172 *lens_ipow(dx, 2)*dy + 1.62278e-06 *x*y*dx + 9.14858e-07 *lens_ipow(x, 2)*dy + -6.74856e-07 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -0.000570171 *y*lens_ipow(dx, 4)*lambda + 0.133935 *x*lens_ipow(dx, 5)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx42 =  + -1.75121 *dx*lens_ipow(dy, 2) + -1.25845 *lens_ipow(dx, 3) + -0.0122834 *y*dx*dy + -0.0064607 *x*lens_ipow(dy, 2) + -0.0206723 *x*lens_ipow(dx, 2) + 8.1139e-07 *x*lens_ipow(y, 2) + -0.000112151 *lens_ipow(x, 2)*dx + -4.95086 *lens_ipow(dx, 5) + -0.00114034 *lens_ipow(y, 2)*lens_ipow(dx, 3)*lambda + -119.525 *lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda + -1.65875 *x*lens_ipow(dx, 8) + 0.669677 *x*y*lens_ipow(dx, 4)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx43 =  + -1.6259 *lens_ipow(dy, 3) + -1.75121 *lens_ipow(dx, 2)*dy + -0.020838 *y*lens_ipow(dy, 2) + -0.00614172 *y*lens_ipow(dx, 2) + -0.0129214 *x*dx*dy + 9.14858e-07 *lens_ipow(x, 2)*y + -3.37428e-07 *lens_ipow(y, 4)*dy + -0.00580957 *lens_ipow(x, 2)*lens_ipow(dy, 5) + -21.7999 *lens_ipow(dy, 7)*lambda + -119.525 *lens_ipow(dx, 4)*lens_ipow(dy, 3)*lambda + 0.401806 *x*y*lens_ipow(dx, 5)*lens_ipow(dy, 2)*lambda+0.0f;
const double dx44 =  + 0.657672  + -1.8122 *lambda + 1.31966 *lens_ipow(lambda, 2) + -0.000285085 *lens_ipow(y, 2)*lens_ipow(dx, 4) + -2.72499 *lens_ipow(dy, 8) + -29.8812 *lens_ipow(dx, 4)*lens_ipow(dy, 4) + 0.133935 *x*y*lens_ipow(dx, 5)*lens_ipow(dy, 3)+0.0f;
} break;