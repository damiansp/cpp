#include <stdio.h>


int main(void) {
  char c = 10;
  char d = -10;
  unsigned int e = 256;
  
  printf("c: (00001010): %d\n", c);
  printf("c << 4 (10100000): %d\n", c << 4);
  printf("c >> 2 (00000010): %d\n", c >> 2);
  printf("d: (11110110): %d\n", d);
  printf("d >> 2: (11111101): %d\n", d >> 2);
  printf("e: %d\n", e);
  printf("e >> 4: %d\n", e >> 4);
}
