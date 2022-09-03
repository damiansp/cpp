#include <stdio.h>


int main(void) {
  int x = 123;
  int *p = &x;
  printf("The pointer value is: %p\n", p); // undefined/unpredictable behavior
  printf("The pointer value is: %p\n", (void *)p); // do this instead
}
