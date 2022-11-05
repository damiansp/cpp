#include <stdio.h>


long power(long base, int exp) {
  if (exp == 1) {
    return base;
  }
  exp--;
  return base * power(base, exp);
}


int main() {
  long base = 1;
  for (int exp = 6; exp > 0; exp--) {
    printf("%lu^%d = %lu\n", base, exp, power(base, exp));
    base++;
  }
  return 0;
}
