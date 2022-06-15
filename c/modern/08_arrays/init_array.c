#include <stdio.h>


int main(void) {
  int a[] = {1, 22, 333, 44, 55};
  for (int i = 0; i < 5; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
  a[0] = 100;
  a[2] = 345;
  for (int i = 0; i < 5; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
