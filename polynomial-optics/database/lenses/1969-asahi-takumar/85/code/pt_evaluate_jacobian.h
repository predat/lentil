case asahi__takumar__1969__85mm:
{
const double dx00 =  + -0.0499727  + 0.0840945 *lambda + 0.00924675 *y*dy + -0.000108135 *lens_ipow(y, 2) + 0.0278356 *x*dx + -0.000347184 *lens_ipow(x, 2) + 2.19809 *lens_ipow(dx, 2)*lambda + 8.75365 *lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -2.04032 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.0193498 *y*lens_ipow(dx, 2)*dy + 0.0431766 *x*lens_ipow(dx, 3) + 0.000898144 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -19.6427 *lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 11.9329 *lens_ipow(dy, 2)*lens_ipow(lambda, 4) + 0.00160399 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx01 =  + 0.0881999 *dx*dy + 0.00924675 *x*dy + -0.000216271 *x*y + 0.0375361 *y*dx*lambda + -0.036175 *y*dx*lens_ipow(lambda, 2) + 0.0193498 *x*lens_ipow(dx, 2)*dy+0.0f;
const double dx02 =  + 84.2638  + 1.09612 *lambda + -33.6235 *lens_ipow(dy, 2) + -104.31 *lens_ipow(dx, 2) + 0.0881999 *y*dy + 0.0139178 *lens_ipow(x, 2) + 0.0187681 *lens_ipow(y, 2)*lambda + 4.39617 *x*dx*lambda + -0.0180875 *lens_ipow(y, 2)*lens_ipow(lambda, 2) + -4.08063 *x*dx*lens_ipow(lambda, 2) + 0.0386997 *x*y*dx*dy + 0.0647649 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.000598763 *lens_ipow(x, 3)*dx+0.0f;
const double dx03 =  + -67.2469 *dx*dy + 0.0881999 *y*dx + 0.00924675 *x*y + 17.5073 *x*dy*lens_ipow(lambda, 2) + 0.0193498 *x*y*lens_ipow(dx, 2) + -39.2853 *x*dy*lens_ipow(lambda, 3) + 23.8657 *x*dy*lens_ipow(lambda, 4) + 0.00106933 *lens_ipow(x, 3)*dy*lens_ipow(lambda, 2)+0.0f;
const double dx04 =  + 1.09612 *dx + 0.0840945 *x + 0.0187681 *lens_ipow(y, 2)*dx + 2.19809 *x*lens_ipow(dx, 2) + -0.036175 *lens_ipow(y, 2)*dx*lambda + 17.5073 *x*lens_ipow(dy, 2)*lambda + -4.08063 *x*lens_ipow(dx, 2)*lambda + -58.928 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 47.7315 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 0.00106933 *lens_ipow(x, 3)*lens_ipow(dy, 2)*lambda+0.0f;
const double dx10 =  + 0.0880602 *dx*dy + 0.00923918 *y*dx + -0.00021668 *x*y + 0.0378899 *x*dy*lambda + 0.0190619 *y*dx*lens_ipow(dy, 2) + -0.0367558 *x*dy*lens_ipow(lambda, 2)+0.0f;
const double dx11 =  + -0.111462  + 0.31634 *lambda + -0.213372 *lens_ipow(lambda, 2) + 0.578243 *lens_ipow(dy, 2) + 0.0279031 *y*dy + -0.000348743 *lens_ipow(y, 2) + 0.00923918 *x*dx + -0.00010834 *lens_ipow(x, 2) + 2.49343 *lens_ipow(dx, 2)*lambda + -3.65139 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.0442761 *y*lens_ipow(dy, 3) + 0.000929687 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.0190619 *x*dx*lens_ipow(dy, 2) + 0.0009678 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 2.04758 *lens_ipow(dx, 2)*lens_ipow(lambda, 4)+0.0f;
const double dx12 =  + -67.1333 *dx*dy + 0.0880602 *x*dy + 0.00923918 *x*y + 4.98686 *y*dx*lambda + -7.30277 *y*dx*lens_ipow(lambda, 2) + 0.0190619 *x*y*lens_ipow(dy, 2) + 0.0006452 *lens_ipow(y, 3)*dx*lambda + 4.09515 *y*dx*lens_ipow(lambda, 4)+0.0f;
const double dx13 =  + 84.2309  + 1.14475 *lambda + -104.223 *lens_ipow(dy, 2) + -33.5667 *lens_ipow(dx, 2) + 1.15649 *y*dy + 0.0139516 *lens_ipow(y, 2) + 0.0880602 *x*dx + 0.018945 *lens_ipow(x, 2)*lambda + 0.0664142 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.000619791 *lens_ipow(y, 3)*dy + 0.0381239 *x*y*dx*dy + -0.0183779 *lens_ipow(x, 2)*lens_ipow(lambda, 2)+0.0f;
const double dx14 =  + 1.14475 *dy + 0.31634 *y + -0.426745 *y*lambda + 2.49343 *y*lens_ipow(dx, 2) + 0.018945 *lens_ipow(x, 2)*dy + -7.30277 *y*lens_ipow(dx, 2)*lambda + -0.0367558 *lens_ipow(x, 2)*dy*lambda + 0.0003226 *lens_ipow(y, 3)*lens_ipow(dx, 2) + 8.19031 *y*lens_ipow(dx, 2)*lens_ipow(lambda, 3)+0.0f;
const double dx20 =  + -0.0106622  + -0.00312394 *lambda + 0.00218115 *lens_ipow(lambda, 2) + -9.20379e-05 *y*dy + 1.84421e-06 *lens_ipow(y, 2) + -0.000140246 *x*dx + 5.29297e-06 *lens_ipow(x, 2) + -0.0233597 *lens_ipow(dy, 2)*lambda + 0.0294073 *lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 1.05483e-05 *x*y*dx*dy + -0.0117028 *lens_ipow(dx, 4)*lambda + 1.27704e-05 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lambda + -6.05378e-07 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -0.0179475 *lens_ipow(dy, 2)*lens_ipow(lambda, 5)+0.0f;
const double dx21 =  + 2.14316e-05 *y*dx + -9.20379e-05 *x*dy + 3.68842e-06 *x*y + -0.00098138 *dx*dy*lambda + 5.27416e-06 *lens_ipow(x, 2)*dx*dy + 0.000342244 *y*lens_ipow(dx, 3)*lambda + -1.81614e-06 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy+0.0f;
const double dx22 =  + -0.908266  + 1.3427 *lens_ipow(dx, 2) + 1.07158e-05 *lens_ipow(y, 2) + -7.01229e-05 *lens_ipow(x, 2) + 0.202013 *lens_ipow(dy, 2)*lambda + -0.00098138 *y*dy*lambda + -1.3381 *lens_ipow(dx, 4) + 5.27416e-06 *lens_ipow(x, 2)*y*dy + -0.170657 *lens_ipow(dy, 2)*lens_ipow(lambda, 3) + 0.000513366 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + -0.0468113 *x*lens_ipow(dx, 3)*lambda + 8.51362e-06 *lens_ipow(x, 3)*dx*lambda + -1.21076e-06 *x*lens_ipow(y, 3)*dx*dy+0.0f;
const double dx23 =  + -9.20379e-05 *x*y + 0.404026 *dx*dy*lambda + -0.00098138 *y*dx*lambda + -0.0467193 *x*dy*lambda + 0.0588145 *x*dy*lens_ipow(lambda, 2) + 5.27416e-06 *lens_ipow(x, 2)*y*dx + -0.341314 *dx*dy*lens_ipow(lambda, 3) + -6.05378e-07 *x*lens_ipow(y, 3)*lens_ipow(dx, 2) + -0.035895 *x*dy*lens_ipow(lambda, 5)+0.0f;
const double dx24 =  + -0.00312394 *x + 0.00436231 *x*lambda + 0.202013 *dx*lens_ipow(dy, 2) + -0.00098138 *y*dx*dy + -0.0233597 *x*lens_ipow(dy, 2) + 0.0588145 *x*lens_ipow(dy, 2)*lambda + -0.511971 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.000171122 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.0117028 *x*lens_ipow(dx, 4) + 4.25681e-06 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -0.0897374 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 4)+0.0f;
const double dx30 =  + 0.00926996 *dx*dy + -8.64274e-05 *y*dx + 3.60804e-06 *x*y + 0.00066528 *x*lens_ipow(dx, 2)*dy + 0.000722599 *x*lens_ipow(dy, 3)*lambda + 1.91108e-08 *x*lens_ipow(y, 3)*lens_ipow(dy, 2) + 6.27645e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy+0.0f;
const double dx31 =  + -0.0106583  + -0.00312097 *lambda + 0.00216928 *lens_ipow(lambda, 2) + -0.000154292 *y*dy + 5.28155e-06 *lens_ipow(y, 2) + -8.64274e-05 *x*dx + 1.80402e-06 *lens_ipow(x, 2) + -0.0185379 *lens_ipow(dx, 2)*lambda + -0.00446808 *lens_ipow(dy, 4) + 0.0674016 *lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 0.000753605 *y*lens_ipow(dx, 2)*dy*lambda + -0.0615954 *lens_ipow(dx, 2)*lens_ipow(lambda, 4) + 2.86662e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 2) + 4.1843e-08 *lens_ipow(x, 3)*y*dx*dy+0.0f;
const double dx32 =  + 1.52225 *dx*dy + 0.00926996 *x*dy + -8.64274e-05 *x*y + -0.0370757 *y*dx*lambda + -1.91237 *lens_ipow(dx, 3)*dy + 0.00066528 *lens_ipow(x, 2)*dx*dy + 0.134803 *y*dx*lens_ipow(lambda, 3) + 0.000753605 *lens_ipow(y, 2)*dx*dy*lambda + -4.60827 *dx*lens_ipow(dy, 5) + -0.123191 *y*dx*lens_ipow(lambda, 4) + 2.09215e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy+0.0f;
const double dx33 =  + -0.904588  + 1.15586 *lens_ipow(dy, 2) + 0.761124 *lens_ipow(dx, 2) + -7.71459e-05 *lens_ipow(y, 2) + 0.00926996 *x*dx + -0.478092 *lens_ipow(dx, 4) + -0.0178723 *y*lens_ipow(dy, 3) + 0.00033264 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.000376803 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 0.0010839 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + -11.5207 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 1.91108e-08 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + 2.09215e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx+0.0f;
const double dx34 =  + -0.00312097 *y + 0.00433857 *y*lambda + -0.0185379 *y*lens_ipow(dx, 2) + 0.202205 *y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.000376803 *lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 0.000361299 *lens_ipow(x, 2)*lens_ipow(dy, 3) + -0.246382 *y*lens_ipow(dx, 2)*lens_ipow(lambda, 3)+0.0f;
const double dx40 =  + -0.016156 *dx*lens_ipow(dy, 2) + -0.00033774 *y*dx*dy + -0.000198217 *x*lens_ipow(dy, 2) + -1.92699e-06 *lens_ipow(y, 2)*dx*lambda + -0.111266 *lens_ipow(dx, 5) + -0.00727393 *x*lens_ipow(dx, 4) + -0.000202273 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -2.48071e-06 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -1.9332e-08 *x*lens_ipow(y, 3)*dy*lambda+0.0f;
const double dx41 =  + -0.0151502 *lens_ipow(dy, 3) + -0.0156894 *lens_ipow(dx, 2)*dy + -0.000501374 *y*lens_ipow(dy, 2) + -0.000194633 *y*lens_ipow(dx, 2) + -0.00033774 *x*dx*dy + -3.85399e-06 *x*y*dx*lambda + -2.8998e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*dy*lambda+0.0f;
const double dx42 =  + -2.15724 *dx*lens_ipow(dy, 2) + -0.65233 *lens_ipow(dx, 3) + -0.0313788 *y*dx*dy + -0.000194633 *lens_ipow(y, 2)*dx + -0.016156 *x*lens_ipow(dy, 2) + -0.00033774 *x*y*dy + -1.92699e-06 *x*lens_ipow(y, 2)*lambda + -10.1258 *lens_ipow(dx, 5) + -0.55633 *x*lens_ipow(dx, 4) + -0.0145479 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -0.000202273 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -1.24035e-06 *lens_ipow(x, 4)*dx+0.0f;
const double dx43 =  + 0.0327632 *dy + -2.13159 *lens_ipow(dy, 3) + -2.15724 *lens_ipow(dx, 2)*dy + -0.0454507 *y*lens_ipow(dy, 2) + -0.0156894 *y*lens_ipow(dx, 2) + -0.000501374 *lens_ipow(y, 2)*dy + -0.0323119 *x*dx*dy + -0.00033774 *x*y*dx + -0.000198217 *lens_ipow(x, 2)*dy + -9.66602e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*lambda+0.0f;
const double dx44 =  + 2.14237  + -9.52551 *lambda + 14.8979 *lens_ipow(lambda, 2) + -7.995 *lens_ipow(lambda, 3) + -1.92699e-06 *x*lens_ipow(y, 2)*dx + -9.66602e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy+0.0f;
} break;