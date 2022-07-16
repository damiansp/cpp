#include <stdio.h>


double divide(const int a, const double b) {
  return a / b;
}


int main(void) {
  int x = 123;
  double y = 456.789;
  double quot = divide(x, y);
  printf("%d / %.3f = %5f\n", x, y, quot);
}
