#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
  int* p = &a[0];
  *p = 11;
  p = &a[4];
  *p = 55;
  for (int i = 0; i < 5; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
