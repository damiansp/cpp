#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  int* p = a; // points at first element of a
  printf("a[0]: %d\n", *p);
}
