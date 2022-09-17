#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int m[8][8];
  int i, j, rows, cols;
  printf("Enter matrix dims (max: 8x8): ");
  scanf("%d %d", &rows, &cols);
  if (cols > 8 || rows > 8) {
    printf("Dims too big. Max is 8x8.\n");
    return 1;
  }
  printf("Enter array:\n> ");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      scanf("%d", &m[i][j]);
    }
  }
  printf("Matrix is:\n ");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      printf("%2d ", m[i][j]);
    }
    printf("\n");
  }
}
