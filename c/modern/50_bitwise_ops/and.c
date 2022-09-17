#include <stdio.h>


int main(void) {
  unsigned int x = 255;

  printf("x: %d\n", x);
  printf("x with 1111 mask: %d\n", x & 0xffff); // f = 15 = 1111
  printf("x with 1010 mask: %d\n", x & 0xaaaa); // a = 10 = 1010
}
