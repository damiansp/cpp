#include <stdio.h>


int main(void) {
  int a[] = {1, 4, 9, 16, 25};
  int *pa = a;
  for (int i = 0; i < 5; ++i) {
    printf("%d ", *pa++);
  }
  printf("\n");
}
