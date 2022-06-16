#include <stdio.h>


int main(void) {
  int x = 10,
    y = 20;
  printf("x: %d, y: %d\n", x, y);
  int* p = &x;
  *p = 100; // x = 100
  p = &y;
  *p = 200; // y = 200
  printf("x: %d, y: %d\n", x, y);
}
