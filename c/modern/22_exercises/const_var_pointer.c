#include <stdio.h>


int main(void) {
  const int x = 123;
  char* const p = "Hello, World!";
  int y = 456;
  const int* p2 = &y;
  printf("Const var: %d\n", x);
  printf("Const pointer: %p\n", (void *)p);
  printf("Const pointee: %d\n", *p2);
}
