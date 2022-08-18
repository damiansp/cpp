#include <stdio.h>

#define myfn(X) _Generic((X), \
    int: myfn_i, \
    float: myfn_f, \
    double: myfn_d, \
    default: myfn_ld \
)(X)


void myfn_i(int x) { printf("Printing int: %d\n", x); }


void myfn_f(float f) { printf("Printing float: %f\n", f); }


void myfn_d(double d) { printf("Printing double: %f\n", d); }


void myfn_ld(double ld) { printf("Printing long double: %Lf\n", ld); }


int main(void) {
  int x = 1;
  float f = 2.3;
  double d = 456.789;
  long double ld = 1234567890.12345;
  myfn(x);
  myfn(f);
  myfn(d);
  myfn(ld);
}
