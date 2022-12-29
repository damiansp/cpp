#include <stdio.h>


int main(void) {
  int a;
  int *a_ptr;

  a = 7;
  a_ptr = &a;
  printf("Address of a is %p\nValue of a_ptr is %p\n", &a, a_ptr);
  printf("\nValue of a is %d\nValue of a_ptr is %d\n", a, *a_ptr);
  printf("\n&*a_ptr: %p\n*&a_ptr: %p\n", &*a_ptr, *&a_ptr);
}
