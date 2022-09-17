#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int a[8];
  int i;

  printf("Enter 8 numbers: ");
  for (i = 0; i < 8; ++i) {
    scanf("%d", &a[i]);
  }
  printf("Got:\n ");
  for (i = 0; i < 8; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
