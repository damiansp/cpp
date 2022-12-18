#include <stdio.h>


void print_array(const int arr[][3]);


int main(void) {
  int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int arr2[2][3] = {1, 2, 3, 4, 5};
  int arr3[2][3] = {{1, 2}, {4}};

  printf("Array 1:\n");
  print_array(arr1);
  printf("Array 2:\n");
  print_array(arr2);
  printf("Array 3:\n");
  print_array(arr3);

  return 0;
}


void print_array(const int arr[][3]) {
  int i, j;
  for (i = 0; i <= 1; i++) {
    for (j = 0; j <= 2; j++) { printf("%d ", arr[i][j]); }
    printf("\n");
  }
}
