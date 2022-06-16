#include <stdio.h>


int main(void) {
  int x = 123;
  printf("x: %d\n", x);
  int* p = &x;
  *p = 456;
  printf("x: %d\n", x);
}
