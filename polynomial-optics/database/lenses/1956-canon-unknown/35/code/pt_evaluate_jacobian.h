case canon__unknown__1956__35mm:
{
const double dx00 =  + 0.522937  + 0.00190873 *lens_ipow(x, 2) + 0.910885 *lens_ipow(dx, 2) + 0.739946 *lens_ipow(dy, 2) + 0.141598 *x*dx + 0.00044489 *lens_ipow(y, 2) + 0.0509275 *y*dy + 0.000269731 *lens_ipow(y, 2)*lambda + 0.000263464 *lens_ipow(x, 2)*lambda + -2.24766 *lens_ipow(dx, 4) + -4.2666e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.173712 *x*lens_ipow(dx, 3) + 0.0012156 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -3.3694e-06 *lens_ipow(x, 4) + 0.00308019 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 0.00298619 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + -1.40387e-06 *lens_ipow(y, 4)*lambda + 0.0669354 *y*lens_ipow(dy, 3)*lens_ipow(lambda, 2)+0.0f;
const double dx01 =  + 0.000889779 *x*y + 0.0509275 *x*dy + 0.0254403 *y*dx + 0.000539462 *x*y*lambda + -2.8444e-06 *lens_ipow(x, 3)*y + 0.0024312 *x*y*lens_ipow(dx, 2) + 0.00597239 *x*y*lens_ipow(dy, 2)*lambda + -5.6155e-06 *x*lens_ipow(y, 3)*lambda + 0.0669354 *x*lens_ipow(dy, 3)*lens_ipow(lambda, 2)+0.0f;
const double dx02 =  + 34.7891  + 1.82177 *x*dx + -52.4399 *lens_ipow(dx, 2) + -18.6801 *lens_ipow(dy, 2) + 0.0707989 *lens_ipow(x, 2) + 0.0127201 *lens_ipow(y, 2) + -8.99062 *x*lens_ipow(dx, 3) + 12.5526 *lens_ipow(dy, 4) + -0.260568 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.0024312 *x*lens_ipow(y, 2)*dx + 110.613 *lens_ipow(dx, 2)*lens_ipow(dy, 2)+0.0f;
const double dx03 =  + 1.47989 *x*dy + -37.3602 *dx*dy + 0.0509275 *x*y + 50.2103 *dx*lens_ipow(dy, 3) + 0.00205346 *lens_ipow(x, 3)*dy + 73.7418 *lens_ipow(dx, 3)*dy + 0.00597239 *x*lens_ipow(y, 2)*dy*lambda + 0.200806 *x*y*lens_ipow(dy, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx04 =  + 0.000269731 *x*lens_ipow(y, 2) + 8.78215e-05 *lens_ipow(x, 3) + 0.00298619 *x*lens_ipow(y, 2)*lens_ipow(dy, 2) + -1.40387e-06 *x*lens_ipow(y, 4) + 0.133871 *x*y*lens_ipow(dy, 3)*lambda+0.0f;
const double dx10 =  + 0.0544193 *y*dx + 0.0256753 *x*dy + 0.00134249 *x*y + -0.000113528 *x*lens_ipow(y, 2)*dy + 0.0318066 *y*lens_ipow(dx, 3) + 0.0040304 *x*y*lens_ipow(dx, 2) + -4.76947e-06 *x*lens_ipow(y, 3) + -3.47991e-06 *lens_ipow(x, 3)*y + 0.00122921 *lens_ipow(y, 2)*dx*dy*lambda+0.0f;
const double dx11 =  + 0.508484  + 0.019378 *lambda + 0.824804 *lens_ipow(dx, 2) + 1.07968 *lens_ipow(dy, 2) + 0.002254 *lens_ipow(y, 2) + 0.152458 *y*dy + 0.0544193 *x*dx + 0.000671246 *lens_ipow(x, 2) + -0.000113528 *lens_ipow(x, 2)*y*dy + 0.00357741 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.175282 *y*lens_ipow(dy, 3) + 0.0318066 *x*lens_ipow(dx, 3) + 0.0020152 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -2.26959 *lens_ipow(dy, 4) + -7.1542e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -3.43655e-06 *lens_ipow(y, 4) + -1.55962 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -8.69978e-07 *lens_ipow(x, 4) + 0.00245842 *x*y*dx*dy*lambda+0.0f;
const double dx12 =  + 1.64961 *y*dx + 0.0544193 *x*y + -33.4377 *dx*dy + 0.00238494 *lens_ipow(y, 3)*dx + 0.0954199 *x*y*lens_ipow(dx, 2) + 0.0040304 *lens_ipow(x, 2)*y*dx + -3.11924 *y*dx*lens_ipow(dy, 2) + 0.00122921 *x*lens_ipow(y, 2)*dy*lambda + 61.3977 *lens_ipow(dx, 3)*dy*lambda+0.0f;
const double dx13 =  + 34.7044  + -47.2224 *lens_ipow(dy, 2) + 2.15935 *y*dy + 0.0762288 *lens_ipow(y, 2) + -16.7188 *lens_ipow(dx, 2) + 0.0128376 *lens_ipow(x, 2) + -5.67638e-05 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.262924 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -9.07835 *y*lens_ipow(dy, 3) + -3.11924 *y*lens_ipow(dx, 2)*dy + 0.00122921 *x*lens_ipow(y, 2)*dx*lambda + 15.3494 *lens_ipow(dx, 4)*lambda+0.0f;
const double dx14 =  + 0.019378 *y + 0.00122921 *x*lens_ipow(y, 2)*dx*dy + 15.3494 *lens_ipow(dx, 4)*dy+0.0f;
const double dx20 =  + -0.0547798  + 4.75532e-05 *lens_ipow(x, 2) + -0.0664615 *lens_ipow(dy, 2) + -0.001281 *x*dx + -0.00298569 *y*dy + 0.0392894 *lens_ipow(dx, 2)*lambda + -2.62563e-05 *lens_ipow(x, 2)*lambda + 0.151209 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -2.25106e-08 *lens_ipow(y, 4) + -0.000325338 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + -0.0406525 *lens_ipow(dx, 2)*lens_ipow(lambda, 4) + 0.000383808 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 4) + 2.67942e-12 *lens_ipow(x, 4)*lens_ipow(y, 4) + 3.7006e-08 *x*lens_ipow(y, 4)*lens_ipow(dx, 3)*lambda + 6.25941e-13 *lens_ipow(x, 8)*lambda+0.0f;
const double dx21 =  + -0.0480484 *dx*dy + -0.00298569 *x*dy + -9.00426e-08 *x*lens_ipow(y, 3) + 0.0159279 *dx*lens_ipow(dy, 3) + -3.43394e-06 *lens_ipow(y, 3)*dx + 2.14353e-12 *lens_ipow(x, 5)*lens_ipow(y, 3) + 7.40119e-08 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dx, 3)*lambda+0.0f;
const double dx22 =  + -1.71382  + -0.0480484 *y*dy + -1.09857 *lens_ipow(dy, 2) + -0.000640502 *lens_ipow(x, 2) + 10.4449 *lens_ipow(dx, 2)*lambda + 0.0785787 *x*dx*lambda + 0.302419 *x*dx*lens_ipow(dy, 2) + 0.0159279 *y*lens_ipow(dy, 3) + 7.29965 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -8.58484e-07 *lens_ipow(y, 4) + -8.43416 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -1.71056 *lens_ipow(dx, 4)*lambda + -0.081305 *x*dx*lens_ipow(lambda, 4) + 5.55089e-08 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(dx, 2)*lambda+0.0f;
const double dx23 =  + -0.0480484 *y*dx + -0.132923 *x*dy + -2.19715 *dx*dy + -0.00298569 *x*y + 0.302419 *x*lens_ipow(dx, 2)*dy + 0.0477838 *y*dx*lens_ipow(dy, 2) + 4.86644 *lens_ipow(dx, 3)*dy + -0.000216892 *lens_ipow(x, 3)*dy*lambda + 0.000255872 *lens_ipow(x, 3)*dy*lens_ipow(lambda, 4)+0.0f;
const double dx24 =  + 3.48163 *lens_ipow(dx, 3) + 0.0392894 *x*lens_ipow(dx, 2) + -8.75209e-06 *lens_ipow(x, 3) + -5.62277 *lens_ipow(dx, 3)*lambda + -0.000108446 *lens_ipow(x, 3)*lens_ipow(dy, 2) + -0.342112 *lens_ipow(dx, 5) + -0.16261 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 0.000511744 *lens_ipow(x, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 1.8503e-08 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(dx, 3) + 6.9549e-14 *lens_ipow(x, 9)+0.0f;
const double dx30 =  + 0.165653 *dx*dy + 0.00388403 *x*dy + 4.6264e-05 *x*y + -0.185939 *lens_ipow(dx, 3)*dy + 0.00018597 *lens_ipow(x, 2)*dx*dy + 0.00602759 *x*lens_ipow(dy, 3)*lambda + 0.0888084 *dx*lens_ipow(dy, 3)*lambda + -1.74525e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 2.25728e-10 *x*lens_ipow(y, 5) + -2.4079e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 3)*dy*lambda + -0.0233997 *y*dx*lens_ipow(dy, 6)*lambda+0.0f;
const double dx31 =  + -0.0527133  + -0.00529584 *lambda + 0.00390598 *lens_ipow(lambda, 2) + 0.0119745 *lens_ipow(dy, 2) + 2.04822e-05 *lens_ipow(y, 2) + -0.00182397 *y*dy + 2.3132e-05 *lens_ipow(x, 2) + -8.12406e-05 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -8.72624e-09 *lens_ipow(x, 4)*y*dy + 5.64319e-10 *lens_ipow(x, 2)*lens_ipow(y, 4) + 2.59417e-13 *lens_ipow(y, 8) + 0.00013036 *lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda + -1.60527e-06 *lens_ipow(x, 3)*y*lens_ipow(dx, 3)*dy*lambda + -0.0233997 *x*dx*lens_ipow(dy, 6)*lambda+0.0f;
const double dx32 =  + 0.165653 *x*dy + 6.9443 *dx*dy + -5.41604e-05 *lens_ipow(y, 3)*dx + -0.557818 *x*lens_ipow(dx, 2)*dy + -15.5653 *lens_ipow(dx, 3)*dy + 6.19899e-05 *lens_ipow(x, 3)*dy + 0.0888084 *x*lens_ipow(dy, 3)*lambda + 6.51798e-05 *lens_ipow(y, 4)*dx*lens_ipow(dy, 3)*lambda + -2.4079e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy*lambda + -0.0233997 *x*y*lens_ipow(dy, 6)*lambda+0.0f;
const double dx33 =  + -1.69765  + 2.79221 *lens_ipow(dy, 2) + 0.023949 *y*dy + 0.165653 *x*dx + -0.000911985 *lens_ipow(y, 2) + 3.47215 *lens_ipow(dx, 2) + 0.00194201 *lens_ipow(x, 2) + -0.185939 *x*lens_ipow(dx, 3) + -3.89132 *lens_ipow(dx, 4) + 6.19899e-05 *lens_ipow(x, 3)*dx + 0.00904139 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + 0.266425 *x*dx*lens_ipow(dy, 2)*lambda + -4.36312e-09 *lens_ipow(x, 4)*lens_ipow(y, 2) + 9.77697e-05 *lens_ipow(y, 4)*lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + -8.02633e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 3)*lambda + -0.140398 *x*y*dx*lens_ipow(dy, 5)*lambda+0.0f;
const double dx34 =  + -0.00529584 *y + 0.00781195 *y*lambda + 0.0030138 *lens_ipow(x, 2)*lens_ipow(dy, 3) + 0.0888084 *x*dx*lens_ipow(dy, 3) + 3.25899e-05 *lens_ipow(y, 4)*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -8.02633e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + -0.0233997 *x*y*dx*lens_ipow(dy, 6)+0.0f;
const double dx40 =  + -5.50698e-05 *x + -0.00140012 *dx + -0.250632 *lens_ipow(dx, 3) + -0.000550324 *y*dx*dy + -0.000513669 *lens_ipow(x, 2)*dx + -0.0191046 *x*lens_ipow(dx, 2) + -0.0413526 *dx*lens_ipow(dy, 2) + -4.95655e-06 *lens_ipow(x, 3) + -0.000721972 *x*lens_ipow(dy, 2)+0.0f;
const double dx41 =  + -0.00856812 *dy + -0.000235657 *y + -0.0378693 *lens_ipow(dx, 2)*dy + -0.000656375 *y*lens_ipow(dx, 2) + -0.000550324 *x*dx*dy + -2.04965e-07 *lens_ipow(y, 3) + -0.465764 *lens_ipow(dy, 7) + -0.0517869 *y*lens_ipow(dy, 8)+0.0f;
const double dx42 =  + -0.00140012 *x + -0.0757385 *y*dx*dy + -3.21916 *dx*lens_ipow(dy, 2) + -0.000656375 *lens_ipow(y, 2)*dx + -0.751896 *x*lens_ipow(dx, 2) + -0.000550324 *x*y*dy + -0.000171223 *lens_ipow(x, 3) + -0.0191046 *lens_ipow(x, 2)*dx + -0.0413526 *x*lens_ipow(dy, 2) + -10.868 *lens_ipow(dx, 3)+0.0f;
const double dx43 =  + -0.00856812 *y + -0.281335 *dy + -0.0378693 *y*lens_ipow(dx, 2) + -3.21916 *lens_ipow(dx, 2)*dy + -0.000550324 *x*y*dx + -0.0827053 *x*dx*dy + -0.000721972 *lens_ipow(x, 2)*dy + -14.9398 *lens_ipow(dy, 5) + -3.26035 *y*lens_ipow(dy, 6) + -0.207148 *lens_ipow(y, 2)*lens_ipow(dy, 7)+0.0f;
const double dx44 =  + 0.669092  + -1.83587 *lambda + 1.32979 *lens_ipow(lambda, 2)+0.0f;
} break;