#include <stdio.h>
#include <stdlib.h>


void f(int* arg) {
  *arg = 456;
}


void increment_pointer(int** arg) {
  (*arg)++;
}


int main(void) {
  int x = 123;
  int *p =&x;
  printf("Pointer val: %d\n", *p);
  f(p);
  printf("After applying f(p): %d\n", *p);

  x = 123;
  printf("x: %d\n", x);
  f(&x);
  printf("f(&x): %d\n", x);

  int a[] = {10, 20, 30};
  int *pa = a;
  printf("Pointer val: %p\n", (void *)pa);
  printf("Pointed to val: %d\n", *pa);
  increment_pointer(&pa);
  printf("After incrementing pointer: %p\n", (void *)pa);
  printf("Pointed val: %d\n", *pa);
}
