case nikon__unknown__2014__50mm:
{
const double dx00 =  + 0.293892  + 0.229711 *lambda + -0.161167 *lens_ipow(lambda, 2) + -0.086926 *lens_ipow(dy, 2) + -0.136109 *lens_ipow(dx, 2) + 0.00134402 *y*dy + -0.000128356 *lens_ipow(y, 2) + 0.00582481 *x*dx + -0.000391845 *lens_ipow(x, 2) + -1.57528e-07 *lens_ipow(y, 4) + -0.0307695 *x*dx*lens_ipow(dy, 2) + -0.0192935 *x*lens_ipow(dx, 3) + -1.63258e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -7.38084e-07 *lens_ipow(x, 4) + 1.32246e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + -0.890754 *lens_ipow(dx, 6) + -0.0503654 *y*lens_ipow(dy, 5) + -5.82871e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy*lambda+0.0f;
const double dx01 =  + -0.0330797 *dx*dy + 0.00308474 *y*dx + 0.00134402 *x*dy + -0.000256713 *x*y + -0.0178025 *y*lens_ipow(dx, 3) + -6.30112e-07 *x*lens_ipow(y, 3) + -1.08839e-06 *lens_ipow(x, 3)*y + 8.81638e-07 *lens_ipow(x, 3)*y*lambda + -2.0766 *lens_ipow(dx, 5)*dy + -0.0503654 *x*lens_ipow(dy, 5) + -32.3674 *lens_ipow(dx, 3)*lens_ipow(dy, 5) + -4.37153e-08 *lens_ipow(x, 4)*lens_ipow(y, 2)*dx*dy*lambda+0.0f;
const double dx02 =  + 32.2033  + 8.12711 *lambda + -5.57645 *lens_ipow(lambda, 2) + -16.0656 *lens_ipow(dy, 2) + -48.6016 *lens_ipow(dx, 2) + -0.0330797 *y*dy + 0.00154237 *lens_ipow(y, 2) + -0.272218 *x*dx + 0.0029124 *lens_ipow(x, 2) + -0.0267037 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.0153847 *lens_ipow(x, 2)*lens_ipow(dy, 2) + -0.0289403 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -10.383 *y*lens_ipow(dx, 4)*dy + -5.34452 *x*lens_ipow(dx, 5) + -97.1022 *y*lens_ipow(dx, 2)*lens_ipow(dy, 5) + -1.45718e-08 *lens_ipow(x, 4)*lens_ipow(y, 3)*dy*lambda+0.0f;
const double dx03 =  + -32.1313 *dx*dy + -0.0330797 *y*dx + -0.173852 *x*dy + 0.00134402 *x*y + -0.0307695 *lens_ipow(x, 2)*dx*dy + -2.0766 *y*lens_ipow(dx, 5) + -0.251827 *x*y*lens_ipow(dy, 4) + -161.837 *y*lens_ipow(dx, 3)*lens_ipow(dy, 4) + -1.45718e-08 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx*lambda+0.0f;
const double dx04 =  + 8.12711 *dx + 0.229711 *x + -11.1529 *dx*lambda + -0.322333 *x*lambda + 4.40819e-07 *lens_ipow(x, 3)*lens_ipow(y, 2) + -1.45718e-08 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx*dy+0.0f;
const double dx10 =  + -0.0369266 *dx*dy + 0.00131549 *y*dx + -0.000257771 *x*y + 0.00540495 *x*dy*lambda + -1.15505e-06 *x*lens_ipow(y, 3) + -6.23156e-07 *lens_ipow(x, 3)*y + -0.0316149 *x*lens_ipow(dy, 3)*lambda + 9.95811e-07 *x*lens_ipow(y, 3)*lambda + -1.86604 *dx*lens_ipow(dy, 5) + -0.0512776 *y*lens_ipow(dx, 5) + -29.8029 *lens_ipow(dx, 5)*lens_ipow(dy, 3) + -2.36525e-08 *lens_ipow(x, 2)*lens_ipow(y, 4)*dx*dy+0.0f;
const double dx11 =  + 0.294709  + 0.22979 *lambda + -0.161941 *lens_ipow(lambda, 2) + -0.159077 *lens_ipow(dy, 2) + -0.0877576 *lens_ipow(dx, 2) + 0.00345767 *y*dy + -0.000427657 *lens_ipow(y, 2) + 0.00131549 *x*dx + -0.000128886 *lens_ipow(x, 2) + -0.0298761 *y*lens_ipow(dx, 2)*dy + 0.000903327 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 2.40401e-05 *lens_ipow(y, 3)*dy + -5.32585e-07 *lens_ipow(y, 4) + -1.73258e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -1.55789e-07 *lens_ipow(x, 4) + 1.49372e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + -0.0512776 *x*lens_ipow(dx, 5) + -3.15367e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy+0.0f;
const double dx12 =  + -32.2759 *dx*dy + -0.175515 *y*dx + -0.0369266 *x*dy + 0.00131549 *x*y + -0.0298761 *lens_ipow(y, 2)*dx*dy + -1.86604 *x*lens_ipow(dy, 5) + -0.256388 *x*y*lens_ipow(dx, 4) + -149.014 *x*lens_ipow(dx, 4)*lens_ipow(dy, 3) + -7.88417e-09 *lens_ipow(x, 3)*lens_ipow(y, 4)*dy+0.0f;
const double dx13 =  + 32.2903  + 7.97882 *lambda + -5.53527 *lens_ipow(lambda, 2) + -48.8143 *lens_ipow(dy, 2) + -16.138 *lens_ipow(dx, 2) + -0.318155 *y*dy + 0.00172884 *lens_ipow(y, 2) + -0.0369266 *x*dx + 0.00270247 *lens_ipow(x, 2)*lambda + -0.014938 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 0.000602218 *lens_ipow(y, 3)*dy + 6.01003e-06 *lens_ipow(y, 4) + -0.0474223 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + -9.33022 *x*dx*lens_ipow(dy, 4) + -89.4087 *x*lens_ipow(dx, 5)*lens_ipow(dy, 2) + -7.88417e-09 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx+0.0f;
const double dx14 =  + 7.97882 *dy + 0.22979 *y + -11.0705 *dy*lambda + -0.323882 *y*lambda + 0.00270247 *lens_ipow(x, 2)*dy + -0.0158074 *lens_ipow(x, 2)*lens_ipow(dy, 3) + 4.97905e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)+0.0f;
const double dx20 =  + -0.0288941  + 0.0114392 *lambda + -0.0082186 *lens_ipow(lambda, 2) + -0.0158013 *lens_ipow(dx, 2) + 0.00013494 *y*dy + -9.63875e-06 *lens_ipow(y, 2) + -3.05231e-05 *lens_ipow(x, 2) + -0.00781614 *lens_ipow(dy, 2)*lambda + -5.36473e-09 *lens_ipow(y, 4) + 1.61167e-06 *x*lens_ipow(y, 2)*dx + -3.86476e-05 *lens_ipow(x, 2)*lens_ipow(dy, 2) + -1.00155e-07 *lens_ipow(x, 2)*lens_ipow(y, 2) + 3.25262e-06 *lens_ipow(x, 3)*dx + 1.13732e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + -0.00131019 *y*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + 1.35375e-09 *lens_ipow(y, 5)*dy + -0.0019411 *x*lens_ipow(dx, 3)*lens_ipow(lambda, 2) + -8.64585e-11 *lens_ipow(x, 6) + -2.03165e-05 *lens_ipow(x, 3)*dx*lens_ipow(dy, 2)*lambda + 5.49155e-11 *lens_ipow(x, 4)*lens_ipow(y, 3)*dy + -9.79846e-12 *lens_ipow(x, 4)*lens_ipow(y, 4)*lens_ipow(dx, 2)+0.0f;
const double dx21 =  + -0.00952141 *dx*dy + 0.00013494 *x*dy + -1.92775e-05 *x*y + -2.14589e-08 *x*lens_ipow(y, 3) + 1.61167e-06 *lens_ipow(x, 2)*y*dx + -6.67702e-08 *lens_ipow(x, 3)*y + 7.58215e-08 *lens_ipow(x, 3)*y*lambda + -0.00131019 *x*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + 6.76875e-09 *x*lens_ipow(y, 4)*dy + 1.09402e-11 *lens_ipow(y, 7)*dx + 3.29493e-11 *lens_ipow(x, 5)*lens_ipow(y, 2)*dy + -7.83877e-12 *lens_ipow(x, 5)*lens_ipow(y, 3)*lens_ipow(dx, 2)+0.0f;
const double dx22 =  + 0.320558  + -1.30227 *lens_ipow(dx, 2) + -0.00952141 *y*dy + -0.0316025 *x*dx + -0.65312 *lens_ipow(dy, 2)*lambda + 2.86771 *lens_ipow(dx, 4) + 8.05836e-07 *lens_ipow(x, 2)*lens_ipow(y, 2) + 8.13155e-07 *lens_ipow(x, 4) + -0.00291166 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -5.07913e-06 *lens_ipow(x, 4)*lens_ipow(dy, 2)*lambda + 1.36753e-12 *lens_ipow(y, 8) + 271.233 *lens_ipow(dx, 2)*lens_ipow(dy, 4)*lens_ipow(lambda, 4) + -3.91938e-12 *lens_ipow(x, 5)*lens_ipow(y, 4)*dx+0.0f;
const double dx23 =  + -0.00952141 *y*dx + 0.00013494 *x*y + -1.30624 *dx*dy*lambda + -0.0156323 *x*dy*lambda + -2.57651e-05 *lens_ipow(x, 3)*dy + -0.00393057 *x*y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 1.35375e-09 *x*lens_ipow(y, 5) + -1.01583e-05 *lens_ipow(x, 4)*dx*dy*lambda + 1.09831e-11 *lens_ipow(x, 5)*lens_ipow(y, 3) + 361.644 *lens_ipow(dx, 3)*lens_ipow(dy, 3)*lens_ipow(lambda, 4)+0.0f;
const double dx24 =  + 0.0114392 *x + -0.0164372 *x*lambda + -0.65312 *dx*lens_ipow(dy, 2) + -0.00781614 *x*lens_ipow(dy, 2) + 3.79108e-08 *lens_ipow(x, 3)*lens_ipow(y, 2) + -0.00262038 *x*y*lens_ipow(dy, 3)*lambda + -0.0019411 *lens_ipow(x, 2)*lens_ipow(dx, 3)*lambda + -5.07913e-06 *lens_ipow(x, 4)*dx*lens_ipow(dy, 2) + 361.644 *lens_ipow(dx, 3)*lens_ipow(dy, 4)*lens_ipow(lambda, 3)+0.0f;
const double dx30 =  + -0.0110991 *dx*dy + -0.000116151 *x*dy + -2.26422e-05 *x*y + 3.06251e-05 *lens_ipow(y, 2)*dx*dy + 8.44574e-07 *lens_ipow(y, 3)*dx + 2.59912e-06 *x*lens_ipow(y, 2)*dy + -3.9153e-08 *x*lens_ipow(y, 3) + 2.42186e-06 *lens_ipow(x, 2)*y*dx + 9.73684e-07 *lens_ipow(x, 3)*dy + 7.39061e-08 *x*lens_ipow(y, 3)*lambda + 0.000203593 *x*y*lens_ipow(dx, 4) + -7.7562e-13 *lens_ipow(x, 3)*lens_ipow(y, 5)+0.0f;
const double dx31 =  + -0.0285845  + 0.0109541 *lambda + -0.00811443 *lens_ipow(lambda, 2) + -0.0157802 *lens_ipow(dy, 2) + -0.00559166 *lens_ipow(dx, 2) + -3.28276e-05 *lens_ipow(y, 2) + -1.13211e-05 *lens_ipow(x, 2) + 3.06497e-06 *lens_ipow(y, 3)*dy + 6.12501e-05 *x*y*dx*dy + 2.53372e-06 *x*lens_ipow(y, 2)*dx + 2.59912e-06 *lens_ipow(x, 2)*y*dy + -5.87295e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + 8.07287e-07 *lens_ipow(x, 3)*dx + -0.00125185 *y*lens_ipow(dy, 3)*lambda + 1.10859e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lambda + 0.000101796 *lens_ipow(x, 2)*lens_ipow(dx, 4) + -7.4743e-13 *lens_ipow(y, 8) + -9.69525e-13 *lens_ipow(x, 4)*lens_ipow(y, 4) + 8.60559e-13 *lens_ipow(y, 8)*lambda+0.0f;
const double dx32 =  + -0.777988 *dx*dy + -0.0111833 *y*dx + -0.0110991 *x*dy + 3.06251e-05 *x*lens_ipow(y, 2)*dy + 8.44574e-07 *x*lens_ipow(y, 3) + 8.07287e-07 *lens_ipow(x, 3)*y + 41.4201 *lens_ipow(dx, 3)*lens_ipow(dy, 3) + 0.000407185 *lens_ipow(x, 2)*y*lens_ipow(dx, 3)+0.0f;
const double dx33 =  + 0.333271  + -0.0201289 *lambda + -1.31042 *lens_ipow(dy, 2) + -0.388994 *lens_ipow(dx, 2) + -0.0315605 *y*dy + -0.0110991 *x*dx + -5.80753e-05 *lens_ipow(x, 2) + 2.89359 *lens_ipow(dy, 4) + 7.66242e-07 *lens_ipow(y, 4) + 3.06251e-05 *x*lens_ipow(y, 2)*dx + 1.29956e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + 2.43421e-07 *lens_ipow(x, 4) + -0.00187777 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + 31.0651 *lens_ipow(dx, 4)*lens_ipow(dy, 2)+0.0f;
const double dx34 =  + -0.0201289 *dy + 0.0109541 *y + -0.0162289 *y*lambda + -0.000625924 *lens_ipow(y, 2)*lens_ipow(dy, 3) + 3.6953e-08 *lens_ipow(x, 2)*lens_ipow(y, 3) + 9.56177e-14 *lens_ipow(y, 9)+0.0f;
const double dx40 =  + -4.79534e-08 *lens_ipow(x, 3) + -0.00654966 *dx*lens_ipow(dy, 2)*lambda + -0.0242755 *lens_ipow(dx, 5) + -2.98684e-07 *lens_ipow(y, 3)*dx*dy + 3.60972e-05 *x*y*lens_ipow(dy, 3) + -7.54982e-07 *x*lens_ipow(y, 2)*lens_ipow(dx, 2) + 3.71526e-05 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2) + -0.00419545 *x*lens_ipow(dx, 6) + -1.46603e-12 *lens_ipow(x, 3)*lens_ipow(y, 4) + 3.42152e-10 *lens_ipow(x, 6)*lens_ipow(dx, 3) + 0.172747 *y*lens_ipow(dx, 3)*lens_ipow(dy, 5)*lambda+0.0f;
const double dx41 =  + -0.00249363 *lens_ipow(dx, 2)*dy + -4.25897e-08 *lens_ipow(y, 3) + -0.00583286 *lens_ipow(dy, 3)*lambda + -0.000362458 *y*lens_ipow(dx, 4) + -9.64454e-07 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -8.96053e-07 *x*lens_ipow(y, 2)*dx*dy + 1.80486e-05 *lens_ipow(x, 2)*lens_ipow(dy, 3) + -7.54982e-07 *lens_ipow(x, 2)*y*lens_ipow(dx, 2) + -1.46603e-12 *lens_ipow(x, 4)*lens_ipow(y, 3) + 0.172747 *x*lens_ipow(dx, 3)*lens_ipow(dy, 5)*lambda+0.0f;
const double dx42 =  + -1.02609 *lens_ipow(dx, 3) + -0.00498725 *y*dx*dy + -4.41122 *dx*lens_ipow(dy, 2)*lambda + -0.00654966 *x*lens_ipow(dy, 2)*lambda + 3.2829 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -0.000724917 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.121377 *x*lens_ipow(dx, 4) + -2.98684e-07 *x*lens_ipow(y, 3)*dy + -7.54982e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx + 1.23842e-05 *lens_ipow(x, 3)*lens_ipow(dy, 2) + -4.76072 *lens_ipow(dx, 5)*lambda + -0.0125863 *lens_ipow(x, 2)*lens_ipow(dx, 5) + 1.46637e-10 *lens_ipow(x, 7)*lens_ipow(dx, 2) + 0.518242 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 5)*lambda+0.0f;
const double dx43 =  + -0.706094 *lens_ipow(dy, 3) + -0.00249363 *y*lens_ipow(dx, 2) + -0.820241 *lens_ipow(dy, 3)*lambda + -4.41122 *lens_ipow(dx, 2)*dy*lambda + -0.0174986 *y*lens_ipow(dy, 2)*lambda + -0.0130993 *x*dx*dy*lambda + -1.45987 *lens_ipow(dy, 5) + 3.2829 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -4.82227e-07 *lens_ipow(y, 4)*dy + -2.98684e-07 *x*lens_ipow(y, 3)*dx + 5.41458e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + 2.47684e-05 *lens_ipow(x, 3)*dx*dy + 0.863736 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda+0.0f;
const double dx44 =  + 3.03094  + -16.5065 *lambda + 35.8317 *lens_ipow(lambda, 2) + -35.8089 *lens_ipow(lambda, 3) + 13.7102 *lens_ipow(lambda, 4) + -0.20506 *lens_ipow(dy, 4) + -2.20561 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.00583286 *y*lens_ipow(dy, 3) + -0.00654966 *x*dx*lens_ipow(dy, 2) + 3.2829 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + -0.793454 *lens_ipow(dx, 6) + 0.172747 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 5)+0.0f;
} break;
