#include <stdio.h>


int main() {
  int x = 12345;
  int* p = &x;

  printf("The value of p is %p\n", p);
  printf("The address of x is %p\n", &x);xx
  return 0;
}
