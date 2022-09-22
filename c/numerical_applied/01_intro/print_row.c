#define _CRT_SECURE_NO_WARNINGS
#define MAX 8

#include <stdio.h>


void print_row(int row, int n_cols, int arr[MAX][MAX]);


int main() {
  int a[MAX][MAX];
  int i, j, rows, cols;

  printf("Enter dims as 'm n' (max %d, %d): ", MAX, MAX);
  scanf("%d %d", &rows, &cols);
  if (rows > MAX || cols > MAX) {
    printf("Numbers exceed allowable dimensions\n");
    return 1;
  }
  printf("Enter array (1 number at a time, then enter)\n");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      printf("%d > ", i*cols + j + 1);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Your array:\n");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  print_row(2, cols, a);
  printf("\n");
  print_row(1, cols, a);
  printf("\n");
}


void print_row(int row, int n_cols, int arr[MAX][MAX]) {
  int j;
  printf("Printing row #%d:\n", row);
  for (j = 0; j < n_cols; ++j) {
    printf(" %d", arr[row - 1][j]);
  }
  printf("\n");
}
