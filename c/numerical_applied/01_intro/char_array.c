#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  char a[8];
  int i;

  printf("Enter 8 characters: ");
  for (i = 0; i < 8; ++i) {
    scanf("%c", &a[i]);
  }
  printf("Got:\n ");
  for (i = 0; i < 8; ++i) {
    printf("%c ", a[i]);
  }
  printf("\n");
}
