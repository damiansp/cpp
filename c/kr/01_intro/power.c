#include <stdio.h>


int power(int base, int exp);


/* test driver for power function */
int main() {
  int i;

  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return 0;
}


/* raise <base> to the <exp>th power */
int power(int base, int exp) {
  int i, p;
  
  p = 1;
  for (i = 1; i <= exp; ++i) { p *= base; }
  return p;
}
