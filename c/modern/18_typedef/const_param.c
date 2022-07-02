#include <stdio.h>


void my_func(const int *param) {
  printf("Using a constant function parameter.\n");
  printf("Pointer value is : %p\n", (void *)param);
  printf("Points to: %d\n", *param);
}


int main(void) {
  int x = 123;
  int *p = &x;
  my_func(p);
}
