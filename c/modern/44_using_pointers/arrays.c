#include <stdio.h>


int main(void) {
  int arr[] = {10, 20, 30, 40, 50};
  int *pa = arr;
  int *p2 = arr;
  printf("First element in array: %d\n", *pa++);
  printf("Second element in array: %d\n", *pa);
  printf("All elements:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", p2[i]);
  }
  printf("\n");
}
