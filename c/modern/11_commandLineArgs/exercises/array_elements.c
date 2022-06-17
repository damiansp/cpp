#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  a[0] *= 10;
  a[4] *= 10;
  printf("Array contains:\n");
  for (int i = 0; i < 5; ++i) {
    printf(" %d", a[i]);
  }
  printf("\n");
}
