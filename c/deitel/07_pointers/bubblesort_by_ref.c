#include <stdio.h>

#define SIZE 10


void print_array(int a[SIZE]);
void bubblesort(int *const array, const int size);


int main(void) {
  int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  int i;

  printf("Start:\n");
  print_array(a);
  bubblesort(a, SIZE);
  printf("Sorted:\n");
  print_array(a);
  
  return 0;
}


void print_array(int a[SIZE]) {
  for (int i = 0; i < SIZE; i++) { printf("%4d ", a[i]); }
  printf("\n");
}


void bubblesort(int *const array, const int size) {
  void swap(int *e1_ptr, int *e2_ptr);
  int n_passes;
  int i;

  for (n_passes = 0; n_passes < size - 1; n_passes++) {
    for (i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) { swap(&array[i], &array[i + 1]); }
    }
  }
}


void swap(int *e1_ptr, int *e2_ptr) {
  int tmp = *e1_ptr;
  *e1_ptr = *e2_ptr;
  *e2_ptr = tmp;
}
