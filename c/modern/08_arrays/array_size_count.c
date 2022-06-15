#include <stdio.h>


int main(void) {
  int arr[] = {1, 2, 3};
  size_t arr_size = sizeof(arr);
  size_t arr_count = sizeof(arr) / sizeof(int);
  printf("Array size: %ld (bytes)\n", arr_size);
  printf("Number of elements: %ld\n", arr_count);
}
