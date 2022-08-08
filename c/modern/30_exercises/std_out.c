#include <stdio.h>


int main(void) {
  char c = 'A';
  int x = 123;
  double d = 456.789;
  size_t size = sizeof(long);
  int *p = &x;
  long l = 12345678901L;
  char str[] = "Hello, World!";
  printf("Char: %c\n", c);
  printf("Int: %d\n", x);
  printf("Double: %f\n", d);
  printf("Size_t: %zu\n", size);
  printf("Pointer: %p\n", (void *)p);
  printf("Long: %ld\n", l);
  printf("Char array: %s\n", str);
}
