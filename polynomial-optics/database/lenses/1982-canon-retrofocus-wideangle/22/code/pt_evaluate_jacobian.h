case canon__retrofocus_wideangle__1982__22mm:
{
const double dx00 =  + -1.71865  + -0.119325 *lambda + 0.0427786 *y*dy + 0.0014811 *lens_ipow(y, 2) + 0.00430467 *lens_ipow(x, 2) + 0.835491 *lens_ipow(dy, 2) + 0.306391 *x*dx*lambda + -2.89132e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.123432 *y*lens_ipow(dx, 2)*dy + 0.000529028 *lens_ipow(x, 3)*dx + 5.01037 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -5.25898e-07 *lens_ipow(y, 4) + -2.05728e-05 *lens_ipow(y, 3)*dy + 0.00550925 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + -0.21388 *x*dx*lens_ipow(lambda, 3) + 0.623994 *x*lens_ipow(dx, 3)*lambda + 0.0827152 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lambda + 0.0764219 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 3.8757 *x*dx*lens_ipow(dy, 4) + 4.0468 *x*lens_ipow(dx, 3)*lens_ipow(lambda, 3)+0.0f;
const double dx01 =  + 1.23511 *dx*dy + 0.0427786 *x*dy + 0.0029622 *x*y + 0.0622259 *y*dx + -1.92754e-06 *lens_ipow(x, 3)*y + -0.123432 *x*lens_ipow(dx, 2)*dy + -2.10359e-06 *x*lens_ipow(y, 3) + -6.17184e-05 *x*lens_ipow(y, 2)*dy + 0.0110185 *x*y*lens_ipow(dx, 2)*lambda + 0.474749 *y*lens_ipow(dx, 3)*lambda+0.0f;
const double dx02 =  + 22.2376  + 1.23511 *y*dy + 32.2129 *lens_ipow(dy, 2) + 0.0311129 *lens_ipow(y, 2) + 0.153196 *lens_ipow(x, 2)*lambda + -0.246864 *x*y*dx*dy + 0.000132257 *lens_ipow(x, 4) + -5.36489 *lens_ipow(lambda, 4) + 10.0207 *x*dx*lens_ipow(lambda, 2) + 0.0110185 *x*lens_ipow(y, 2)*dx*lambda + -0.10694 *lens_ipow(x, 2)*lens_ipow(lambda, 3) + 0.712124 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 0.935991 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lambda + 0.0551435 *lens_ipow(x, 3)*dx*lambda + 1.93785 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 6.07021 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 1420.22 *lens_ipow(dx, 2)*lens_ipow(lambda, 5) + -38512.8 *lens_ipow(dx, 4)*lens_ipow(lambda, 6)+0.0f;
const double dx03 =  + 1.23511 *y*dx + 0.0427786 *x*y + 64.4258 *dx*dy + 1.67098 *x*dy + -0.123432 *x*y*lens_ipow(dx, 2) + -2.05728e-05 *x*lens_ipow(y, 3) + 0.101896 *lens_ipow(x, 3)*lens_ipow(dy, 3) + 7.7514 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3)+0.0f;
const double dx04 =  + -0.119325 *x + 0.153196 *lens_ipow(x, 2)*dx + -21.4596 *dx*lens_ipow(lambda, 3) + 10.0207 *x*lens_ipow(dx, 2)*lambda + 0.00550925 *x*lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.32082 *lens_ipow(x, 2)*dx*lens_ipow(lambda, 2) + 0.237375 *lens_ipow(y, 2)*lens_ipow(dx, 3) + 0.311997 *lens_ipow(x, 2)*lens_ipow(dx, 3) + 0.0275717 *lens_ipow(x, 3)*lens_ipow(dx, 2) + 6.07021 *lens_ipow(x, 2)*lens_ipow(dx, 3)*lens_ipow(lambda, 2) + 2367.03 *lens_ipow(dx, 3)*lens_ipow(lambda, 4) + -46215.4 *lens_ipow(dx, 5)*lens_ipow(lambda, 5)+0.0f;
const double dx10 =  + 1.39647 *dx*dy + 0.0474701 *y*dx + 0.0030335 *x*y + 0.06468 *x*dy + -10.2214 *dx*lens_ipow(dy, 3) + -0.346474 *y*dx*lens_ipow(dy, 2) + -1.7391e-06 *x*lens_ipow(y, 3) + -6.6336e-05 *lens_ipow(x, 2)*y*dx + -2.18118e-06 *lens_ipow(x, 3)*y+0.0f;
const double dx11 =  + -1.7306  + -0.10273 *lambda + 0.945742 *lens_ipow(dx, 2) + 0.0474701 *x*dx + 0.00151675 *lens_ipow(x, 2) + 0.00443311 *lens_ipow(y, 2) + 0.44573 *y*dy*lambda + 0.00044102 *lens_ipow(y, 3)*dy + -0.346474 *x*dx*lens_ipow(dy, 2) + -2.60865e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -2.2112e-05 *lens_ipow(x, 3)*dx + -5.45294e-07 *lens_ipow(x, 4) + 24.852 *lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.0866107 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + -0.583794 *y*dy*lens_ipow(lambda, 3) + -33.225 *lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 5.09375 *y*lens_ipow(dx, 4)*dy + 0.0784253 *lens_ipow(y, 2)*lens_ipow(dx, 4) + 5.0472 *y*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + 83.3103 *lens_ipow(dy, 4)*lens_ipow(lambda, 3) + -8.59025e-06 *lens_ipow(y, 4)*lens_ipow(lambda, 4)+0.0f;
const double dx12 =  + 1.89148 *y*dx + 1.39647 *x*dy + 0.0474701 *x*y + 70.3793 *dx*dy + -10.2214 *x*lens_ipow(dy, 3) + -0.346474 *x*y*lens_ipow(dy, 2) + -2.2112e-05 *lens_ipow(x, 3)*y + 10.1875 *lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + 0.104567 *lens_ipow(y, 3)*lens_ipow(dx, 3)+0.0f;
const double dx13 =  + 21.5639  + 1.39647 *x*dx + 35.1897 *lens_ipow(dx, 2) + 0.03234 *lens_ipow(x, 2) + 245.631 *lens_ipow(dy, 2)*lambda + 0.222865 *lens_ipow(y, 2)*lambda + 0.000110255 *lens_ipow(y, 4) + -30.6641 *x*dx*lens_ipow(dy, 2) + -0.692949 *x*y*dx*dy + 49.7041 *y*dy*lens_ipow(lambda, 2) + 0.0577405 *lens_ipow(y, 3)*dy*lambda + -0.291897 *lens_ipow(y, 2)*lens_ipow(lambda, 3) + -66.45 *y*dy*lens_ipow(lambda, 3) + 2.54688 *lens_ipow(y, 2)*lens_ipow(dx, 4) + 7.57081 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 333.241 *y*lens_ipow(dy, 3)*lens_ipow(lambda, 3) + -1049.43 *lens_ipow(dy, 2)*lens_ipow(lambda, 6)+0.0f;
const double dx14 =  + -0.10273 *y + 81.877 *lens_ipow(dy, 3) + 0.222865 *lens_ipow(y, 2)*dy + 49.7041 *y*lens_ipow(dy, 2)*lambda + 0.0288702 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -0.87569 *lens_ipow(y, 2)*dy*lens_ipow(lambda, 2) + -99.675 *y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 5.0472 *lens_ipow(y, 2)*lens_ipow(dy, 3)*lambda + 249.931 *y*lens_ipow(dy, 4)*lens_ipow(lambda, 2) + -6.8722e-06 *lens_ipow(y, 5)*lens_ipow(lambda, 3) + -2098.86 *lens_ipow(dy, 3)*lens_ipow(lambda, 5)+0.0f;
const double dx20 =  + -0.0160916  + 0.00761171 *lambda + -0.00522146 *lens_ipow(lambda, 2) + -1.06233e-05 *lens_ipow(y, 2)*lambda + 4.39479e-05 *lens_ipow(x, 2)*lambda + -0.000944104 *y*dy*lambda + -0.00197888 *x*dx*lambda + -1.19873e-06 *lens_ipow(x, 3)*dx + 8.70007e-06 *lens_ipow(y, 2)*lens_ipow(lambda, 2) + 0.000791159 *y*dy*lens_ipow(lambda, 2) + 0.00169096 *x*dx*lens_ipow(lambda, 2) + -0.000168053 *lens_ipow(x, 2)*lens_ipow(lambda, 3) + -1.18302e-07 *lens_ipow(x, 4)*lambda + -1.11726e-05 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*dy + 0.000155502 *lens_ipow(x, 2)*lens_ipow(lambda, 4) + 0.00077992 *x*y*dx*lens_ipow(dy, 3) + 1.07071e-07 *lens_ipow(x, 4)*lens_ipow(lambda, 2) + -1.16591e-13 *lens_ipow(x, 4)*lens_ipow(y, 4) + -0.0106733 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 4)+0.0f;
const double dx21 =  + -2.12466e-05 *x*y*lambda + -0.000944104 *x*dy*lambda + 0.022065 *dx*dy*lambda + -0.0207708 *dx*dy*lens_ipow(lambda, 2) + 1.74001e-05 *x*y*lens_ipow(lambda, 2) + -8.09554e-05 *y*dx*lens_ipow(lambda, 2) + 0.000791159 *x*dy*lens_ipow(lambda, 2) + -3.72422e-06 *lens_ipow(x, 3)*lens_ipow(dx, 2)*dy + 0.00038996 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3) + -9.32732e-14 *lens_ipow(x, 5)*lens_ipow(y, 3)+0.0f;
const double dx22 =  + -0.391512  + -0.0110625 *lambda + 4.05248 *lens_ipow(dx, 2)*lambda + -0.000989438 *lens_ipow(x, 2)*lambda + 0.982768 *lens_ipow(dy, 2)*lambda + 0.022065 *y*dy*lambda + -2.99682e-07 *lens_ipow(x, 4) + -0.0207708 *y*dy*lens_ipow(lambda, 2) + -3.09774 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -4.04777e-05 *lens_ipow(y, 2)*lens_ipow(lambda, 2) + 0.000845478 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -7.44843e-06 *lens_ipow(x, 3)*y*dx*dy + 0.00038996 *lens_ipow(x, 2)*y*lens_ipow(dy, 3) + -1.16197 *lens_ipow(dy, 2)*lens_ipow(lambda, 4) + -0.00711551 *lens_ipow(x, 3)*dx*lens_ipow(dy, 4)+0.0f;
const double dx23 =  + -0.000944104 *x*y*lambda + 1.96554 *dx*dy*lambda + 0.022065 *y*dx*lambda + -0.0207708 *y*dx*lens_ipow(lambda, 2) + 0.000791159 *x*y*lens_ipow(lambda, 2) + -3.72422e-06 *lens_ipow(x, 3)*y*lens_ipow(dx, 2) + 0.00116988 *lens_ipow(x, 2)*y*dx*lens_ipow(dy, 2) + -2.32394 *dx*dy*lens_ipow(lambda, 4) + -0.014231 *lens_ipow(x, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 3)+0.0f;
const double dx24 =  + 0.00761171 *x + -0.0110625 *dx + -0.0104429 *x*lambda + 1.35083 *lens_ipow(dx, 3) + -1.06233e-05 *x*lens_ipow(y, 2) + 1.46493e-05 *lens_ipow(x, 3) + -0.000944104 *x*y*dy + -0.000989438 *lens_ipow(x, 2)*dx + 0.982768 *dx*lens_ipow(dy, 2) + 0.022065 *y*dx*dy + -0.0415416 *y*dx*dy*lambda + -2.06516 *lens_ipow(dx, 3)*lambda + 1.74001e-05 *x*lens_ipow(y, 2)*lambda + -8.09554e-05 *lens_ipow(y, 2)*dx*lambda + 0.00158232 *x*y*dy*lambda + 0.00169096 *lens_ipow(x, 2)*dx*lambda + -0.000168053 *lens_ipow(x, 3)*lens_ipow(lambda, 2) + -2.36604e-08 *lens_ipow(x, 5) + 0.000207336 *lens_ipow(x, 3)*lens_ipow(lambda, 3) + -4.64787 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 4.28283e-08 *lens_ipow(x, 5)*lambda+0.0f;
const double dx30 =  + 0.00412535 *dx*dy + 2.02305e-05 *x*y + -0.000396466 *x*dy + -5.74895e-07 *lens_ipow(y, 3)*dx + -2.90351e-08 *x*lens_ipow(y, 3) + -1.33613e-06 *lens_ipow(x, 2)*y*dx + -5.21831e-08 *lens_ipow(x, 3)*y + 0.000103853 *x*y*lens_ipow(dy, 2)*lambda + 5.58254e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + 0.00340475 *x*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + 5.5804e-05 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy*lambda + -2.28724e-07 *lens_ipow(x, 3)*y*lens_ipow(dy, 2)*lambda + 0.00163444 *lens_ipow(y, 2)*lens_ipow(dx, 3)*dy*lens_ipow(lambda, 3)+0.0f;
const double dx31 =  + -0.0159347  + 0.00714237 *lambda + -0.00383367 *lens_ipow(dx, 2) + -0.0048891 *lens_ipow(lambda, 2) + 1.01153e-05 *lens_ipow(x, 2) + 1.04946e-05 *lens_ipow(y, 2) + -0.00213767 *y*dy*lambda + -1.24744e-06 *lens_ipow(y, 3)*dy + -1.72468e-06 *x*lens_ipow(y, 2)*dx + -4.35527e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + -4.45376e-07 *lens_ipow(x, 3)*dx + -1.30458e-08 *lens_ipow(x, 4) + -3.08674e-08 *lens_ipow(y, 4) + 5.19267e-05 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + -6.13058e-05 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 0.00749542 *y*dy*lens_ipow(lambda, 3) + 3.72169e-07 *lens_ipow(x, 3)*y*dx*dy + -0.00677595 *y*dy*lens_ipow(lambda, 4) + 5.5804e-05 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*dy*lambda + -5.71809e-08 *lens_ipow(x, 4)*lens_ipow(dy, 2)*lambda + 0.00326888 *x*y*lens_ipow(dx, 3)*dy*lens_ipow(lambda, 3)+0.0f;
const double dx32 =  + -0.00766734 *y*dx + 0.00412535 *x*dy + 1.05376 *dx*dy + -5.74895e-07 *x*lens_ipow(y, 3) + -4.45376e-07 *lens_ipow(x, 3)*y + -4.08705e-05 *lens_ipow(y, 3)*dx*lambda + 1.86085e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 5.5804e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy*lambda + 0.00490332 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy*lens_ipow(lambda, 3)+0.0f;
const double dx33 =  + -0.392631  + -0.00839466 *lambda + 0.00412535 *x*dx + 0.526882 *lens_ipow(dx, 2) + -0.000198233 *lens_ipow(x, 2) + 1.23068 *lens_ipow(dy, 2) + -0.00106883 *lens_ipow(y, 2)*lambda + -3.1186e-07 *lens_ipow(y, 4) + 0.000103853 *lens_ipow(x, 2)*y*dy*lambda + 0.00374771 *lens_ipow(y, 2)*lens_ipow(lambda, 3) + 1.86085e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx + 0.00510712 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -0.00338798 *lens_ipow(y, 2)*lens_ipow(lambda, 4) + 2.7902e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + -1.14362e-07 *lens_ipow(x, 4)*y*dy*lambda + 0.00163444 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(lambda, 3)+0.0f;
const double dx34 =  + -0.00839466 *dy + 0.00714237 *y + -0.0097782 *y*lambda + -0.00106883 *lens_ipow(y, 2)*dy + 5.19267e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + -2.04353e-05 *lens_ipow(y, 3)*lens_ipow(dx, 2) + 0.0112431 *lens_ipow(y, 2)*dy*lens_ipow(lambda, 2) + 0.00340475 *lens_ipow(x, 2)*lens_ipow(dy, 3)*lambda + -0.0135519 *lens_ipow(y, 2)*dy*lens_ipow(lambda, 3) + 2.7902e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -5.71809e-08 *lens_ipow(x, 4)*y*lens_ipow(dy, 2) + 0.00490332 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*dy*lens_ipow(lambda, 2)+0.0f;
const double dx40 =  + -6.63891e-06 *x + -0.0980637 *lens_ipow(dx, 3) + -0.00243057 *x*lens_ipow(dx, 2) + -2.5263e-05 *lens_ipow(x, 2)*dx + -0.0724556 *dx*lens_ipow(dy, 2) + -1.44828e-07 *lens_ipow(x, 3) + -0.000629876 *y*dx*dy + -0.000317133 *x*lens_ipow(dy, 2) + -1.92428 *lens_ipow(dx, 7) + 0.231251 *y*lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx41 =  + -0.000719637 *dy + -1.61226e-05 *y + -0.000325471 *y*lens_ipow(dx, 2) + -0.0731752 *lens_ipow(dx, 2)*dy + -0.000629876 *x*dx*dy + -0.00111573 *lens_ipow(y, 2)*lens_ipow(dy, 3) + 5.21479e-08 *lens_ipow(y, 4)*dy + -0.0995309 *y*lens_ipow(dy, 4) + -2.89598 *lens_ipow(dy, 5) + 0.231251 *x*lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx42 =  + -9.34359 *lens_ipow(dx, 3) + -0.000325471 *lens_ipow(y, 2)*dx + -0.294191 *x*lens_ipow(dx, 2) + -13.5049 *dx*lens_ipow(dy, 2) + -0.00243057 *lens_ipow(x, 2)*dx + -0.14635 *y*dx*dy + -8.42098e-06 *lens_ipow(x, 3) + -0.0724556 *x*lens_ipow(dy, 2) + -0.000629876 *x*y*dy + -145.227 *lens_ipow(dx, 5) + -13.4699 *x*lens_ipow(dx, 6) + -6694.68 *lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda + 0.693753 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda+0.0f;
const double dx43 =  + -0.000719637 *y + -0.0510099 *dy + -13.5049 *lens_ipow(dx, 2)*dy + -0.0731752 *y*lens_ipow(dx, 2) + -0.144911 *x*dx*dy + -0.000629876 *x*y*dx + -0.000317133 *lens_ipow(x, 2)*dy + -0.00111573 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 1.04296e-08 *lens_ipow(y, 5) + -453.793 *lens_ipow(dy, 5) + -0.199062 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -14.4799 *y*lens_ipow(dy, 4) + -6694.68 *lens_ipow(dx, 4)*lens_ipow(dy, 3)*lambda + 0.693753 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda+0.0f;
const double dx44 =  + 1.03096  + -2.84496 *lambda + 6.37006 *lens_ipow(lambda, 3) + -4.96346 *lens_ipow(lambda, 4) + -1673.67 *lens_ipow(dx, 4)*lens_ipow(dy, 4) + 0.231251 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 3)+0.0f;
} break;