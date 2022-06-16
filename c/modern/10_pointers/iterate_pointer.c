#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  int* p = a;
  for (int i = 0; i < 5; ++i) {
    printf("%d ", p[i]);  // p[i] eq. to *(p + i)
  }
  printf("\n");
}
