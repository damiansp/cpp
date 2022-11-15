#include <stdio.h>

#define SIZE 12


int main(void) {
  int a[SIZE] = {1, 23, 456, 7, 89, 12, 3, 45, 678, 9, 1, 234};
  int total = 0;

  printf("Adding:\n");
  for (int i = 0; i < SIZE; i++) {
    total += a[i];
    printf("+ %d ", a[i]);
  }
  printf("\n = %d\n", total);
}
