case kodak__petzval__1948__65mm:
{
const double dx00 =  + 0.558616  + -0.0355691 *lambda + 0.0232271 *lens_ipow(lambda, 2) + 0.506025 *lens_ipow(dy, 2) + 0.68474 *lens_ipow(dx, 2) + 0.0305808 *y*dy + 0.000313053 *lens_ipow(y, 2) + 0.072218 *x*dx + 0.00069111 *lens_ipow(x, 2) + 0.0513161 *lens_ipow(dx, 2)*lambda + -4.3411e-08 *lens_ipow(y, 4) + 0.184206 *x*lens_ipow(dx, 3) + 0.0176171 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.000497694 *lens_ipow(x, 3)*dx + 4.25189e-06 *lens_ipow(x, 4) + 3.88324e-05 *x*lens_ipow(y, 2)*dx*lambda + -0.0812924 *y*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + 3.85704e-06 *lens_ipow(x, 4)*lens_ipow(dy, 2) + 2.79544e-09 *lens_ipow(x, 4)*lens_ipow(y, 2) + -4.38003e-05 *lens_ipow(x, 3)*y*dx*dy*lambda + -0.00180495 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -3.28299 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -159.342 *lens_ipow(dx, 4)*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const double dx01 =  + 0.366561 *dx*dy + 0.0241819 *y*dx + 0.0305808 *x*dy + 0.000626106 *x*y + -1.73644e-07 *x*lens_ipow(y, 3) + 3.88324e-05 *lens_ipow(x, 2)*y*dx*lambda + -0.0812924 *x*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + 1.11818e-09 *lens_ipow(x, 5)*y + -1.09501e-05 *lens_ipow(x, 4)*dx*dy*lambda + -0.00060165 *lens_ipow(x, 3)*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2)+0.0f;
const double dx02 =  + 64.9422  + -29.9649 *lens_ipow(dy, 2) + -94.378 *lens_ipow(dx, 2) + 0.366561 *y*dy + 0.012091 *lens_ipow(y, 2) + 1.36948 *x*dx + 0.036109 *lens_ipow(x, 2) + 0.102632 *x*dx*lambda + 0.276309 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.0117447 *lens_ipow(x, 3)*dx + 0.000124423 *lens_ipow(x, 4) + 1.94162e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + -0.162585 *x*y*dx*dy*lens_ipow(lambda, 2) + -1.09501e-05 *lens_ipow(x, 4)*y*dy*lambda + -0.0012033 *lens_ipow(x, 3)*y*dx*dy*lens_ipow(lambda, 2) + -4.92448 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -637.369 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const double dx03 =  + -59.9299 *dx*dy + 0.366561 *y*dx + 1.01205 *x*dy + 0.0305808 *x*y + -0.0812924 *x*y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 1.54282e-06 *lens_ipow(x, 5)*dy + -1.09501e-05 *lens_ipow(x, 4)*y*dx*lambda + -0.00060165 *lens_ipow(x, 3)*y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -3.28299 *lens_ipow(x, 2)*lens_ipow(dx, 3)*dy*lens_ipow(lambda, 3) + -318.684 *x*lens_ipow(dx, 4)*dy*lens_ipow(lambda, 4)+0.0f;
const double dx04 =  + -0.0355691 *x + 0.0464541 *x*lambda + 0.0513161 *x*lens_ipow(dx, 2) + 1.94162e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx + -0.162585 *x*y*lens_ipow(dx, 2)*dy*lambda + -1.09501e-05 *lens_ipow(x, 4)*y*dx*dy + -0.0012033 *lens_ipow(x, 3)*y*lens_ipow(dx, 2)*dy*lambda + -4.92448 *lens_ipow(x, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -637.369 *x*lens_ipow(dx, 4)*lens_ipow(dy, 2)*lens_ipow(lambda, 3)+0.0f;
const double dx10 =  + 0.335301 *dx*dy + 0.0285774 *y*dx + 0.0234659 *x*dy + 0.000571519 *x*y + 1.37274e-05 *lens_ipow(y, 3)*dx + 0.00202703 *x*y*lens_ipow(dy, 2) + 0.000130843 *x*lens_ipow(y, 2)*dy + 1.78113e-06 *x*lens_ipow(y, 3) + 0.00462099 *lens_ipow(y, 2)*dx*dy*lambda + 7.62034e-05 *lens_ipow(y, 3)*dx*lambda + 3.56627e-05 *lens_ipow(x, 2)*y*dx*lambda + 0.00151095 *x*y*lens_ipow(dx, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx11 =  + 0.558716  + -0.0360494 *lambda + 0.0253794 *lens_ipow(lambda, 2) + 0.693314 *lens_ipow(dy, 2) + 0.470482 *lens_ipow(dx, 2) + 0.0691917 *y*dy + 0.000618646 *lens_ipow(y, 2) + 0.0285774 *x*dx + 0.00028576 *lens_ipow(x, 2) + 0.252821 *y*lens_ipow(dy, 3) + 0.0232238 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.000640966 *lens_ipow(y, 3)*dy + 5.47891e-06 *lens_ipow(y, 4) + 4.11823e-05 *x*lens_ipow(y, 2)*dx + 0.00101352 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 0.000130843 *lens_ipow(x, 2)*y*dy + 2.6717e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + 0.0040073 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 0.00924199 *x*y*dx*dy*lambda + 0.00022861 *x*lens_ipow(y, 2)*dx*lambda + 1.18876e-05 *lens_ipow(x, 3)*dx*lambda + -4.74514 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.000755477 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx12 =  + -61.2123 *dx*dy + 0.940965 *y*dx + 0.335301 *x*dy + 0.0285774 *x*y + 1.37274e-05 *x*lens_ipow(y, 3) + 0.00267153 *lens_ipow(y, 3)*dx*lambda + 0.00462099 *x*lens_ipow(y, 2)*dy*lambda + 7.62034e-05 *x*lens_ipow(y, 3)*lambda + 1.18876e-05 *lens_ipow(x, 3)*y*lambda + -9.49029 *y*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.00151095 *lens_ipow(x, 2)*y*dx*lens_ipow(lambda, 2)+0.0f;
const double dx13 =  + 64.9464  + -94.3533 *lens_ipow(dy, 2) + -30.6062 *lens_ipow(dx, 2) + 1.38663 *y*dy + 0.0345958 *lens_ipow(y, 2) + 0.335301 *x*dx + 0.0117329 *lens_ipow(x, 2) + 0.379231 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.0154825 *lens_ipow(y, 3)*dy + 0.000160241 *lens_ipow(y, 4) + 0.00202703 *lens_ipow(x, 2)*y*dy + 6.54215e-05 *lens_ipow(x, 2)*lens_ipow(y, 2) + 0.00462099 *x*lens_ipow(y, 2)*dx*lambda + -9.49029 *y*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2)+0.0f;
const double dx14 =  + -0.0360494 *y + 0.0507589 *y*lambda + 0.00133577 *lens_ipow(y, 3)*lens_ipow(dx, 2) + 0.00462099 *x*lens_ipow(y, 2)*dx*dy + 7.62034e-05 *x*lens_ipow(y, 3)*dx + 1.18876e-05 *lens_ipow(x, 3)*y*dx + -9.49029 *y*lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + 0.00151095 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*lambda+0.0f;
const double dx20 =  + -0.0273768  + 0.000252428 *lambda + -0.0227746 *lens_ipow(dy, 2) + -0.000791948 *y*dy + -3.66754e-06 *lens_ipow(y, 2) + -0.00073258 *x*dx + -2.01746e-06 *lens_ipow(x, 2) + 0.0196184 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 4.48158e-05 *y*dy*lens_ipow(lambda, 2) + -0.00351424 *x*lens_ipow(dx, 3) + -1.98779e-07 *x*lens_ipow(y, 2)*dx + -0.000277235 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -7.13348e-06 *lens_ipow(x, 3)*dx + -5.60187e-08 *lens_ipow(x, 4) + 0.00750501 *lens_ipow(dy, 4)*lambda + -0.0041541 *lens_ipow(dx, 2)*lens_ipow(lambda, 3)+0.0f;
const double dx21 =  + -0.0310643 *dx*dy + -0.000491331 *y*dx + -0.000791948 *x*dy + -7.33508e-06 *x*y + -0.000609746 *y*dx*lens_ipow(dy, 2) + 4.48158e-05 *x*dy*lens_ipow(lambda, 2) + -1.98779e-07 *lens_ipow(x, 2)*y*dx+0.0f;
const double dx22 =  + -1.41015  + 0.0076591 *lens_ipow(lambda, 2) + -0.669303 *lens_ipow(dy, 2) + 2.35891 *lens_ipow(dx, 2) + -0.0310643 *y*dy + -0.000245665 *lens_ipow(y, 2) + -0.00036629 *lens_ipow(x, 2) + -0.168486 *lens_ipow(dy, 2)*lambda + -0.793917 *lens_ipow(dx, 2)*lambda + 1.38466 *lens_ipow(dy, 4) + 7.25255 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 4.65038 *lens_ipow(dx, 4) + -0.000304873 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.0392367 *x*dx*lens_ipow(dy, 2) + -0.00527136 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -9.93893e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.000184823 *lens_ipow(x, 3)*dx + -1.78337e-06 *lens_ipow(x, 4) + -0.0083082 *x*dx*lens_ipow(lambda, 3)+0.0f;
const double dx23 =  + -1.33861 *dx*dy + -0.0310643 *y*dx + -0.0455491 *x*dy + -0.000791948 *x*y + -0.336971 *dx*dy*lambda + 5.53862 *dx*lens_ipow(dy, 3) + 4.83503 *lens_ipow(dx, 3)*dy + -0.000609746 *lens_ipow(y, 2)*dx*dy + 0.0392367 *x*lens_ipow(dx, 2)*dy + 4.48158e-05 *x*y*lens_ipow(lambda, 2) + 0.03002 *x*lens_ipow(dy, 3)*lambda+0.0f;
const double dx24 =  + 0.000252428 *x + 0.0153182 *dx*lambda + -0.168486 *dx*lens_ipow(dy, 2) + -0.264639 *lens_ipow(dx, 3) + 8.96316e-05 *x*y*dy*lambda + 0.00750501 *x*lens_ipow(dy, 4) + -0.0124623 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx30 =  + 0.0478673 *dx*dy + -9.14448e-05 *y*dx + 0.000460285 *x*dy + 1.04346e-06 *x*y + -0.0501276 *lens_ipow(dx, 3)*dy + 4.12019e-09 *x*lens_ipow(y, 3) + 1.80381e-05 *lens_ipow(x, 2)*dx*dy + -1.76079e-07 *lens_ipow(x, 2)*y*dx + 3.46921e-05 *y*dx*lens_ipow(lambda, 3)+0.0f;
const double dx31 =  + -0.0273691  + 0.00024878 *lambda + 0.0012633 *lens_ipow(dx, 2) + -0.000730203 *y*dy + -2.25887e-06 *lens_ipow(y, 2) + -9.14448e-05 *x*dx + 5.2173e-07 *lens_ipow(x, 2) + -0.00426979 *y*lens_ipow(dy, 3) + -0.000287388 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -6.777e-06 *lens_ipow(y, 3)*dy + -5.04246e-08 *lens_ipow(y, 4) + 6.18029e-09 *lens_ipow(x, 2)*lens_ipow(y, 2) + -5.86931e-08 *lens_ipow(x, 3)*dx + -0.00422663 *lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 3.46921e-05 *x*dx*lens_ipow(lambda, 3)+0.0f;
const double dx32 =  + 4.20718 *dx*dy + 0.0025266 *y*dx + 0.0478673 *x*dy + -9.14448e-05 *x*y + -0.300544 *dx*dy*lambda + 3.14065 *dx*lens_ipow(dy, 3) + -3.60529 *lens_ipow(dx, 3)*dy + -0.150383 *x*lens_ipow(dx, 2)*dy + 6.01269e-06 *lens_ipow(x, 3)*dy + -5.86931e-08 *lens_ipow(x, 3)*y + 3.46921e-05 *x*y*lens_ipow(lambda, 3)+0.0f;
const double dx33 =  + -1.40969  + 0.00765284 *lens_ipow(lambda, 2) + 2.29987 *lens_ipow(dy, 2) + 2.10359 *lens_ipow(dx, 2) + -0.000365101 *lens_ipow(y, 2) + 0.0478673 *x*dx + 0.000230142 *lens_ipow(x, 2) + -0.802012 *lens_ipow(dy, 2)*lambda + -0.150272 *lens_ipow(dx, 2)*lambda + 6.34333 *lens_ipow(dy, 4) + 4.71097 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.901323 *lens_ipow(dx, 4) + -0.00640468 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -0.000191592 *lens_ipow(y, 3)*dy + -1.69425e-06 *lens_ipow(y, 4) + -0.0501276 *x*lens_ipow(dx, 3) + 6.01269e-06 *lens_ipow(x, 3)*dx + -0.00845326 *y*dy*lens_ipow(lambda, 3)+0.0f;
const double dx34 =  + 0.00024878 *y + 0.0153057 *dy*lambda + -0.267337 *lens_ipow(dy, 3) + -0.150272 *lens_ipow(dx, 2)*dy + -0.0126799 *y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.000104076 *x*y*dx*lens_ipow(lambda, 2)+0.0f;
const double dx40 =  + 0.00195654 *y*dx*dy + -1.40046e-06 *x*lens_ipow(y, 2) + 0.685965 *dx*lens_ipow(dy, 4) + -0.000333252 *x*y*lens_ipow(dy, 3) + -0.00153082 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -0.000137684 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -4.00208e-06 *lens_ipow(x, 4)*dx + -3.9156e-08 *lens_ipow(x, 5) + -0.000281642 *lens_ipow(y, 2)*lens_ipow(dx, 3)*lambda + 5.72113e-06 *x*lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + 8.04656e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + -7.6846e-09 *lens_ipow(x, 2)*lens_ipow(y, 4)*dx + -1.16034e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy + -2.87221e-10 *lens_ipow(x, 3)*lens_ipow(y, 4) + -6.71239 *lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda + -1.641e-09 *lens_ipow(y, 6)*dx*lens_ipow(dy, 2) + -1.36271e-14 *x*lens_ipow(y, 8) + 6.15162e-10 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx*dy + 1.24226e-11 *lens_ipow(x, 5)*lens_ipow(y, 3)*dy+0.0f;
const double dx41 =  + 0.00195654 *x*dx*dy + -1.40046e-06 *lens_ipow(x, 2)*y + -0.00148282 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -0.000134429 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -3.93874e-06 *lens_ipow(y, 4)*dy + -3.87747e-08 *lens_ipow(y, 5) + -0.000166626 *lens_ipow(x, 2)*lens_ipow(dy, 3) + 0.983755 *lens_ipow(dx, 4)*dy*lambda + -0.000563284 *x*y*lens_ipow(dx, 3)*lambda + 8.58169e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 5.36437e-06 *lens_ipow(x, 3)*y*dx*lens_ipow(dy, 2) + -1.02461e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx + -8.70258e-09 *lens_ipow(x, 4)*lens_ipow(y, 2)*dy + -2.87221e-10 *lens_ipow(x, 4)*lens_ipow(y, 3) + -9.84602e-09 *x*lens_ipow(y, 5)*dx*lens_ipow(dy, 2) + -5.45086e-14 *lens_ipow(x, 2)*lens_ipow(y, 7) + 3.69098e-10 *lens_ipow(x, 5)*lens_ipow(y, 2)*dx*dy + 6.21131e-12 *lens_ipow(x, 6)*lens_ipow(y, 2)*dy+0.0f;
const double dx42 =  + 0.00195654 *x*y*dy + 0.685965 *x*lens_ipow(dy, 4) + -0.00153082 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -6.8842e-05 *lens_ipow(x, 4)*dx + -8.00415e-07 *lens_ipow(x, 5) + 3.93502 *y*lens_ipow(dx, 3)*dy*lambda + -0.000844926 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 5.72113e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*dy + 2.68219e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dy, 2) + -2.56153e-09 *lens_ipow(x, 3)*lens_ipow(y, 4) + -20.1372 *x*lens_ipow(dx, 2)*lens_ipow(dy, 4)*lambda + -1.641e-09 *x*lens_ipow(y, 6)*lens_ipow(dy, 2) + 1.23033e-10 *lens_ipow(x, 5)*lens_ipow(y, 3)*dy+0.0f;
const double dx43 =  + 0.00195654 *x*y*dx + -0.00148282 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -6.72147e-05 *lens_ipow(y, 4)*dy + -7.87749e-07 *lens_ipow(y, 5) + 2.74386 *x*dx*lens_ipow(dy, 3) + -0.000499878 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + 0.983755 *y*lens_ipow(dx, 4)*lambda + 2.86056e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dx, 2) + 5.36437e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*dy + -2.90086e-09 *lens_ipow(x, 4)*lens_ipow(y, 3) + -26.8496 *x*lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda + -3.28201e-09 *x*lens_ipow(y, 6)*dx*dy + 1.23033e-10 *lens_ipow(x, 5)*lens_ipow(y, 3)*dx + 2.07044e-12 *lens_ipow(x, 6)*lens_ipow(y, 3)+0.0f;
const double dx44 =  + 0.649055  + -1.79696 *lambda + 1.3121 *lens_ipow(lambda, 2) + 0.983755 *y*lens_ipow(dx, 4)*dy + -0.000281642 *x*lens_ipow(y, 2)*lens_ipow(dx, 3) + -6.71239 *x*lens_ipow(dx, 3)*lens_ipow(dy, 4)+0.0f;
} break;