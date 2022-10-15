#include <stdio.h>


int intpow(int base, int exp);


int main() {
  for (int base = 1, exp = 9; base < 8; base++, exp--) {
    printf("%d^%d = %d\n", base, exp, intpow(base, exp));
  }

  return 0;
}


int intpow(int base, int exp) {
  int out = base;
  while (exp-- > 1) {
    out *= base;
  }
  return out;
}
