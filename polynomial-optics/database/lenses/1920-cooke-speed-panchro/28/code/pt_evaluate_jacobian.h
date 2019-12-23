case cooke__speed_panchro__1920__28mm:
{
const double dx00 =  + 0.595687  + 0.0148683 *lambda + 0.104668 *y*dy + 0.245626 *x*dx + 0.00204667 *lens_ipow(y, 2) + 0.00574408 *lens_ipow(x, 2) + 1.10243 *lens_ipow(dy, 2) + 1.44899 *lens_ipow(dx, 2) + 0.00314826 *lens_ipow(x, 3)*dx + 0.669862 *x*lens_ipow(dx, 3) + 3.24558e-05 *lens_ipow(x, 4) + -0.0160717 *y*lens_ipow(dy, 3) + 0.0858822 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -0.371926 *y*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -1.85326e-08 *lens_ipow(x, 2)*lens_ipow(y, 4) + -7.09643e-08 *lens_ipow(x, 4)*lens_ipow(y, 2) + -1.50167e-09 *lens_ipow(y, 6) + 4.89477e-05 *lens_ipow(x, 4)*lens_ipow(dy, 2) + -6.2778e-09 *lens_ipow(x, 5)*lens_ipow(y, 2)*dx + -1.42347e-07 *lens_ipow(x, 6)*lens_ipow(dy, 2)+0.0f;
const double dx01 =  + 0.659879 *dx*dy + 0.104668 *x*dy + 0.00409334 *x*y + 0.0649882 *y*dx + -0.0458692 *y*lens_ipow(dx, 3) + -0.0160717 *x*lens_ipow(dy, 3) + -0.371926 *x*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -2.47101e-08 *lens_ipow(x, 3)*lens_ipow(y, 3) + -2.83857e-08 *lens_ipow(x, 5)*y + -9.01e-09 *x*lens_ipow(y, 5) + -2.0926e-09 *lens_ipow(x, 6)*y*dx+0.0f;
const double dx02 =  + 27.8383  + 0.659879 *y*dy + 0.122813 *lens_ipow(x, 2) + -31.7723 *lens_ipow(dx, 2) + -6.96045 *lens_ipow(dy, 2) + 2.89798 *x*dx + 0.0324941 *lens_ipow(y, 2) + 0.000787065 *lens_ipow(x, 4) + 1.00479 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -0.0688038 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 0.0572548 *lens_ipow(x, 3)*dx + -0.743851 *x*y*dx*lens_ipow(dy, 3) + 903.623 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 319.518 *lens_ipow(dx, 4)*lens_ipow(dy, 2) + -1.0463e-09 *lens_ipow(x, 6)*lens_ipow(y, 2)+0.0f;
const double dx03 =  + 0.659879 *y*dx + 0.104668 *x*y + -13.9209 *dx*dy + 2.20487 *x*dy + -0.0482152 *x*y*lens_ipow(dy, 2) + -1.11578 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 1204.83 *lens_ipow(dx, 3)*lens_ipow(dy, 3) + 1.95791e-05 *lens_ipow(x, 5)*dy + 127.807 *lens_ipow(dx, 5)*dy + -4.06707e-08 *lens_ipow(x, 7)*dy+0.0f;
const double dx04 =  + 0.0148683 *x+0.0f;
const double dx10 =  + 0.636282 *dx*dy + 0.101806 *y*dx + 0.0039698 *x*y + 0.06371 *x*dy + -0.0632606 *x*lens_ipow(dy, 3)*lambda + -6.95605e-07 *x*lens_ipow(y, 4)*dy + -4.36744e-08 *x*lens_ipow(y, 5) + -3.16673e-10 *lens_ipow(x, 5)*lens_ipow(y, 3) + 0.000174495 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + 4.36495e-11 *x*lens_ipow(y, 7)+0.0f;
const double dx11 =  + 0.604681  + 1.08698 *lens_ipow(dx, 2) + 0.243475 *y*dy + 1.44704 *lens_ipow(dy, 2) + 0.101806 *x*dx + 0.0019849 *lens_ipow(x, 2) + 0.00524352 *lens_ipow(y, 2) + 0.000669331 *lens_ipow(y, 2)*lambda + 0.239601 *lens_ipow(dx, 4) + 0.00592516 *lens_ipow(y, 3)*dy*lambda + 0.157776 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + 6.4265e-05 *lens_ipow(y, 4)*lambda + 1.21111 *y*lens_ipow(dy, 3)*lambda + 4.85201e-05 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -1.39121e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -1.09186e-07 *lens_ipow(x, 2)*lens_ipow(y, 4) + -1.41816e-07 *lens_ipow(y, 6)*lens_ipow(dx, 2) + -1.58336e-10 *lens_ipow(x, 6)*lens_ipow(y, 2) + 0.00011633 *lens_ipow(x, 3)*y*lens_ipow(dx, 3)*dy + 1.52773e-10 *lens_ipow(x, 2)*lens_ipow(y, 6)+0.0f;
const double dx12 =  + 2.17397 *y*dx + 0.636282 *x*dy + 0.101806 *x*y + -13.1001 *dx*dy + 0.958405 *y*lens_ipow(dx, 3) + 1.9408e-05 *lens_ipow(y, 5)*dx + 295.02 *dx*lens_ipow(dy, 5)*lambda + -4.05188e-08 *lens_ipow(y, 7)*dx + 4775.95 *lens_ipow(dx, 5)*lens_ipow(dy, 3) + 0.000174495 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy+0.0f;
const double dx13 =  + 27.8262  + 0.121737 *lens_ipow(y, 2) + 2.89408 *y*dy + 0.636282 *x*dx + -6.55007 *lens_ipow(dx, 2) + 0.031855 *lens_ipow(x, 2) + -31.066 *lens_ipow(dy, 2) + 0.00148129 *lens_ipow(y, 4)*lambda + 0.105184 *lens_ipow(y, 3)*dy*lambda + -0.0948909 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda + 1.81667 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + -3.47803e-07 *lens_ipow(x, 2)*lens_ipow(y, 4) + 737.55 *lens_ipow(dx, 2)*lens_ipow(dy, 4)*lambda + 2387.98 *lens_ipow(dx, 6)*lens_ipow(dy, 2) + 5.81649e-05 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 3)+0.0f;
const double dx14 =  + 0.00022311 *lens_ipow(y, 3) + 0.00148129 *lens_ipow(y, 4)*dy + 0.052592 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 1.2853e-05 *lens_ipow(y, 5) + -0.0316303 *lens_ipow(x, 2)*lens_ipow(dy, 3) + 0.605555 *lens_ipow(y, 2)*lens_ipow(dy, 3) + 147.51 *lens_ipow(dx, 2)*lens_ipow(dy, 5)+0.0f;
const double dx20 =  + -0.0699663  + -0.00620778 *y*dy + -0.00478057 *x*dx + -6.31365e-05 *lens_ipow(y, 2) + -3.94284e-05 *lens_ipow(x, 2) + -0.0870234 *lens_ipow(dy, 2) + -1.32016e-05 *lens_ipow(x, 2)*lambda + 0.0354808 *lens_ipow(dx, 4) + -0.000131081 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.0822638 *x*dx*lens_ipow(dy, 4) + 1.40639 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 3.86802e-10 *lens_ipow(x, 6) + -0.0481005 *y*lens_ipow(dx, 6)*dy + 0.00297343 *lens_ipow(x, 2)*lens_ipow(dy, 6) + 6.1988e-12 *lens_ipow(x, 6)*lens_ipow(y, 2) + 2.1723e-12 *lens_ipow(x, 2)*lens_ipow(y, 6) + -8.46573e-07 *lens_ipow(y, 4)*lens_ipow(dy, 4) + -2.45464e-08 *lens_ipow(x, 5)*y*lens_ipow(dx, 3)*dy + -5.6934e-11 *lens_ipow(y, 7)*lens_ipow(dy, 3)+0.0f;
const double dx21 =  + -0.0849431 *dx*dy + -0.00620778 *x*dy + -0.000126273 *x*y + -0.00225784 *y*dx + 0.0125495 *y*lens_ipow(dx, 3)*lens_ipow(dy, 2) + 0.117709 *dx*lens_ipow(dy, 5) + -0.0481005 *x*lens_ipow(dx, 6)*dy + 1.77109e-12 *lens_ipow(x, 7)*y + 4.34461e-12 *lens_ipow(x, 3)*lens_ipow(y, 5) + -3.38629e-06 *x*lens_ipow(y, 3)*lens_ipow(dy, 4) + 0.0528416 *y*lens_ipow(dx, 7) + -4.09106e-09 *lens_ipow(x, 6)*lens_ipow(dx, 3)*dy + -3.98538e-10 *x*lens_ipow(y, 6)*lens_ipow(dy, 3)+0.0f;
const double dx22 =  + -1.57143  + -0.0849431 *y*dy + -0.00239029 *lens_ipow(x, 2) + 2.9568 *lens_ipow(dx, 2) + -0.925382 *lens_ipow(dy, 2) + -0.00112892 *lens_ipow(y, 2) + 0.141923 *x*lens_ipow(dx, 3) + -8.73873e-05 *lens_ipow(x, 3)*dx + 0.0188243 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.117709 *y*lens_ipow(dy, 5) + 0.0411319 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 2.81278 *x*dx*lens_ipow(dy, 4) + -0.288603 *x*y*lens_ipow(dx, 5)*dy + 0.184945 *lens_ipow(y, 2)*lens_ipow(dx, 6) + 135.84 *lens_ipow(dx, 2)*lens_ipow(dy, 6)*lambda + -1.22732e-08 *lens_ipow(x, 6)*y*lens_ipow(dx, 2)*dy+0.0f;
const double dx23 =  + -0.0849431 *y*dx + -0.00620778 *x*y + -1.85076 *dx*dy + -0.174047 *x*dy + 0.0125495 *lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + 0.588545 *y*dx*lens_ipow(dy, 4) + 0.164528 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3) + 5.62556 *x*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -0.0481005 *x*y*lens_ipow(dx, 6) + 0.00594686 *lens_ipow(x, 3)*lens_ipow(dy, 5) + -3.38629e-06 *x*lens_ipow(y, 4)*lens_ipow(dy, 3) + 271.681 *lens_ipow(dx, 3)*lens_ipow(dy, 5)*lambda + -4.09106e-09 *lens_ipow(x, 6)*y*lens_ipow(dx, 3) + -1.70802e-10 *x*lens_ipow(y, 7)*lens_ipow(dy, 2)+0.0f;
const double dx24 =  + -4.40054e-06 *lens_ipow(x, 3) + 45.2801 *lens_ipow(dx, 3)*lens_ipow(dy, 6)+0.0f;
const double dx30 =  + 0.178989 *dx*dy + 6.82324e-05 *x*y + 0.00593085 *x*dy + -9.59708e-08 *lens_ipow(x, 3)*y*lambda + -6.93429e-05 *lens_ipow(x, 2)*y*dx*lens_ipow(dy, 2) + -0.0150896 *y*dx*lens_ipow(dy, 4) + 0.00091931 *x*y*lens_ipow(dy, 4) + 0.0355272 *x*lens_ipow(dy, 5) + -0.000538585 *lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + -1.46791e-08 *lens_ipow(x, 5)*dy + 1.28467e-07 *lens_ipow(x, 5)*lens_ipow(dy, 3) + 1.09044e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dy, 3)+0.0f;
const double dx31 =  + -0.0699705  + 0.00240701 *lens_ipow(dx, 2) + -0.00425384 *y*dy + 3.41162e-05 *lens_ipow(x, 2) + -2.85117e-05 *lens_ipow(y, 2) + 0.00922829 *lens_ipow(dy, 2)*lambda + -2.12129e-05 *lens_ipow(y, 2)*lambda + -2.39927e-08 *lens_ipow(x, 4)*lambda + -2.31143e-05 *lens_ipow(x, 3)*dx*lens_ipow(dy, 2) + -0.000741605 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.0150896 *x*dx*lens_ipow(dy, 4) + 0.000459655 *lens_ipow(x, 2)*lens_ipow(dy, 4) + -0.00107717 *x*y*lens_ipow(dx, 3)*dy + 0.0910585 *lens_ipow(dy, 6) + 0.0181035 *y*lens_ipow(dy, 5)*lambda + 0.195073 *lens_ipow(dy, 6)*lens_ipow(lambda, 2) + 5.45221e-08 *lens_ipow(x, 4)*y*lens_ipow(dy, 3) + 1.90885e-12 *lens_ipow(y, 8)*lambda + 2.52706e-05 *lens_ipow(y, 4)*lens_ipow(dx, 6)+0.0f;
const double dx32 =  + 0.00481402 *y*dx + 0.178989 *x*dy + 5.66022 *dx*dy + -2.31143e-05 *lens_ipow(x, 3)*y*lens_ipow(dy, 2) + -0.000494403 *lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + -0.0150896 *x*y*lens_ipow(dy, 4) + -0.00161576 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 3.03247e-05 *lens_ipow(y, 5)*lens_ipow(dx, 5)+0.0f;
const double dx33 =  + -1.56885  + -0.00212692 *lens_ipow(y, 2) + 0.178989 *x*dx + 2.83011 *lens_ipow(dx, 2) + 0.00296542 *lens_ipow(x, 2) + 2.5389 *lens_ipow(dy, 2) + 0.0184566 *y*dy*lambda + 0.537725 *lens_ipow(dy, 2)*lambda + -4.62286e-05 *lens_ipow(x, 3)*y*dx*dy + -0.000494403 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -0.0603585 *x*y*dx*lens_ipow(dy, 3) + 0.00183862 *lens_ipow(x, 2)*y*lens_ipow(dy, 3) + 0.0888181 *lens_ipow(x, 2)*lens_ipow(dy, 4) + -0.000538585 *x*lens_ipow(y, 2)*lens_ipow(dx, 3) + -2.44652e-09 *lens_ipow(x, 6) + 0.546351 *y*lens_ipow(dy, 5) + 0.0452588 *lens_ipow(y, 2)*lens_ipow(dy, 4)*lambda + 6.42337e-08 *lens_ipow(x, 6)*lens_ipow(dy, 2) + 1.17044 *y*lens_ipow(dy, 5)*lens_ipow(lambda, 2) + 8.17832e-08 *lens_ipow(x, 4)*lens_ipow(y, 2)*lens_ipow(dy, 2)+0.0f;
const double dx34 =  + 0.00922829 *y*lens_ipow(dy, 2) + 0.179242 *lens_ipow(dy, 3) + -7.07097e-06 *lens_ipow(y, 3) + -2.39927e-08 *lens_ipow(x, 4)*y + 0.00905176 *lens_ipow(y, 2)*lens_ipow(dy, 5) + 0.390146 *y*lens_ipow(dy, 6)*lambda + 2.12094e-13 *lens_ipow(y, 9)+0.0f;
const double dx40 =  + 0.00645543 *dx + 0.000222809 *x + -0.607388 *lens_ipow(dx, 3) + -0.00156331 *x*y*dy + -0.000780754 *lens_ipow(y, 2)*dx + -3.12075e-05 *x*lens_ipow(y, 2) + -0.0627207 *x*lens_ipow(dx, 2) + -0.00235037 *lens_ipow(x, 2)*dx + -0.607732 *dx*lens_ipow(dy, 2) + -3.13089e-05 *lens_ipow(x, 3) + -0.0412211 *y*dx*dy + -0.0214258 *x*lens_ipow(dy, 2)+0.0f;
const double dx41 =  + 0.00652273 *dy + 0.000225283 *y + -0.608701 *lens_ipow(dy, 3) + -0.0213615 *y*lens_ipow(dx, 2) + -0.000781654 *lens_ipow(x, 2)*dy + -0.00156151 *x*y*dx + -3.12075e-05 *lens_ipow(x, 2)*y + -3.14485e-05 *lens_ipow(y, 3) + -0.606937 *lens_ipow(dx, 2)*dy + -0.0628916 *y*lens_ipow(dy, 2) + -0.0412211 *x*dx*dy + -0.00235867 *lens_ipow(y, 2)*dy+0.0f;
const double dx42 =  + 0.00645543 *x + 0.219176 *dx + -19.9489 *lens_ipow(dx, 3) + -0.0213615 *lens_ipow(y, 2)*dx + -1.82216 *x*lens_ipow(dx, 2) + -19.9745 *dx*lens_ipow(dy, 2) + -0.000780754 *x*lens_ipow(y, 2) + -0.0627207 *lens_ipow(x, 2)*dx + -1.21387 *y*dx*dy + -0.000783458 *lens_ipow(x, 3) + -0.607732 *x*lens_ipow(dy, 2) + -0.0412211 *x*y*dy+0.0f;
const double dx43 =  + 0.00652273 *y + 0.221625 *dy + -1.8261 *y*lens_ipow(dy, 2) + -19.9745 *lens_ipow(dx, 2)*dy + -0.000781654 *lens_ipow(x, 2)*y + -19.9875 *lens_ipow(dy, 3) + -0.606937 *y*lens_ipow(dx, 2) + -0.0628916 *lens_ipow(y, 2)*dy + -1.21546 *x*dx*dy + -0.0412211 *x*y*dx + -0.0214258 *lens_ipow(x, 2)*dy + -0.000786224 *lens_ipow(y, 3)+0.0f;
const double dx44 =  + 0.231557  + -0.316552 *lambda+0.0f;
} break;
