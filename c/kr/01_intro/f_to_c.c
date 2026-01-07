#include <stdio.h>

/* print Fahrenheit-Celius table for f = 0, 20, 40, ..., 300 */
int main() {
  float f, c;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  f = lower;
  printf("  F   \t     C\n");
  while(f <= upper) {
    c = 5./9. * (f - 32.);
    printf("%3.0f\t%6.1f\n", f, c);
    f += step;
  }
}
