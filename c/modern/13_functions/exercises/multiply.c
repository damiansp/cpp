#include <stdio.h>


int multiply(int x, int y) {
  return x * y;
}


int main(void) {
  int n = 11,
    m = 13;
  int prod = multiply(m, n);
  printf("%d * %d = %d\n", m, n, prod);
}
