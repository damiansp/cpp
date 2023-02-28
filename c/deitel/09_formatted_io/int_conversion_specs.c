#include <stdio.h>


int main(void) {
  printf("%%d: %d\n", 455);
  printf("%%i: %i\n", 455);
  printf("%%hd: %hd\n", 32000); // short int
  printf("%%ld: %ld\n", 2000000000L); // long
  printf("%%o: %o\n", 455);
  printf("%%u: %i\n", 455);    // unsigned int
  printf("%%x: %x\n", 455);
  printf("%%X: %X\n", 455);
}
