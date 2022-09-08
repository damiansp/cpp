#include <stdio.h>


float round(float n, int precision) {
  int multiplier = 10;
  for (int i = 0; i < precision; i++) {
    multiplier *= 10;
  }
  int as_int = (int) (n * multiplier);
  int last_digit = as_int % 10;
  as_int -= last_digit;
  if (last_digit >= 5) {
    as_int += 10;
  }
  return (float) as_int / multiplier;
}



int main() {
  printf("round(9.2, 0): %.1f\n", round(9.2, 0));
  printf("round(9.256, 2): %.2f\n", round(9.256, 2));
  printf("round(22.8, 0): %.1f\n", round(22.8, 0));
  return 0;
}
