#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  int *pa = a;
  pa += 2;
  printf("a[3]: %d\n", *pa);
  pa++;
  printf("a[4]: %d\n", *pa);
}
