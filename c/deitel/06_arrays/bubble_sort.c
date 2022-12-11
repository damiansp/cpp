#include <stdio.h>

#define SIZE 10


int main(void) {
  int arr[SIZE] = {2, 37, 6, 45, 4, 68, 8, 89, 10, 12};
  int n_passes;
  int i;
  int temp;

  printf("Data items at start:");
  for (i = 0; i < SIZE; i++) { printf("%4d", arr[i]); }
  // bubble sort
  for (n_passes = 1; n_passes < SIZE; n_passes++) {
    for (i = 0; i < SIZE - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        // swap
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
  printf("\nAfter sorting:\n");
  for (i = 0; i < SIZE; i++) { printf("%4d", arr[i]); }
  printf("\n");
}
