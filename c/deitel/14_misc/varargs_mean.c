#include <stdio.h>
#include <stdarg.h>


double mean(int i, ...);


int main() {
  double w = 1.2;
  double x = 34.5;
  double y = 67.8;
  double z = 90.1;

  printf("w: %.1f  x: %.1f  y: %.1f  z: %.1f\n", w, x, y, z);
  printf("mean(w, x): %.2f\n", mean(2, w, x));
  printf("mean(w, x, y): %.2f\n", mean(3, w, x, y));
  printf("mean(w, x, y, z): %.2f\n", mean(4, w, x, y, z));
  return 0;
}


double mean(int i, ...) {
  double total = 0;
  va_list ap;

  va_start(ap, i);
  for (int j = 1; j <= i; ++j) {
    total += va_arg(ap, double);
  }
  va_end(ap);
  return total / i;
}
