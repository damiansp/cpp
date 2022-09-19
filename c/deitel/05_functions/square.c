#include <stdio.h>


int square(int y);


int main(void) {
  for (int x = 1; x <= 10; ++x) {
    printf("%d^2 = %d\n", x, square(x));
  }
  return 0;
}


int square(int y) { return y * y; }
