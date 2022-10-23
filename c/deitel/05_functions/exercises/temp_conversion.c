#include <stdio.h>


float ctof(float c) {
  return c*(9.0/5) + 32.;
}

float ftoc(float f) {
  return (5.0/9) * (f - 32.);
}


int main() {
  for (float i = 0.; i <= 100.; i += 10) {
    printf("%.0fC = %.2fF\t%.0fF = %.2fC\n", i, ctof(i), i, ftoc(i));
  }
}
