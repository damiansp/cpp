#include <stdio.h>

#define SIZE 10


void print_array(int arr[]) {
  for (int i = 0; i < SIZE; i++) { printf("%4d", arr[i]); }
}


void swap(int *a, int *b) {
  int tmp = *a;

  *a = *b;
  *b = tmp;
}


void bubble_sort(int arr[], int size) {
  int n_passes, i;
  int n_swapped;
  int tmp;

  for (n_passes = 1; n_passes < size; n_passes++) {
    n_swapped = 0;
    for (i = 0; i < size - n_passes; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        n_swapped++;
      }
    }
    if (!n_swapped) {
      printf("\nBubble sort completed in %d passes\n", n_passes);
      return;
    }
  }
}


int main(void) {
  int arr[SIZE] = {2, 37, 6, 45, 4, 68, 8, 89, 10, 12};
  int i;

  printf("Data items at start:\n");
  print_array(arr);
  bubble_sort(arr, SIZE);
  printf("\nAfter sorting:\n");
  print_array(arr);
  printf("\n");
}
