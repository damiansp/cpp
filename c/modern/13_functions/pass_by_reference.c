#include <stdio.h>


void increment(int *x) {
  *x += 1;
}


int main(void) {
  int a = 123;
  printf("a = %d\n", a);
  increment(&a);
  printf("increment(&a) -> a = %d\n", a);
}
