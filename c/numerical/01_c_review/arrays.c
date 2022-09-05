/* tells compiler not to suggest secure versions o lib functions (eg. scanf_s
   in place of scanf, etc */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int v[8];
  int m [3][5];
  int i, j, rows, cols;

  printf("Enter 8 integers:\n");
  for (i = 0; i < 8; i++) {
    scanf("%d", &v[i]);
  }
  printf("Your vector:\n");
  for (i = 0; i < 8; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");

  printf("Enter no. rows and no. cols: (max 3 x 5)\n");
  scanf("%d %d", &rows, &cols);
  if (rows > 3 || cols > 5) {
    printf("Max matrix size is 3 x 5\n");
  } else {
    printf("Enter array (row-wise):\n");
    for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
        scanf("%d", &m[i][j]);
      }
    }
    printf("Your matrix:\n");
    for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
        printf("%d ", m[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
}
