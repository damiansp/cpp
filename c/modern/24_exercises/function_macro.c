#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))


int main(void) {
  int x = 123,
    y = 456;
  printf("Min(%d, %d): %d\n", x, y, MIN(x, y));
  printf("Max(%d, %d): %d\n", x, y, MAX(x, y));
}
