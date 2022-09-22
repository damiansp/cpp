#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void compare(int a, int b);
int m, n, o;


int main() {
  printf("Enter an int: ");
  scanf("%d", &m);
  printf("And another: ");
  scanf("%d", &n);
  printf("And one more: ");
  scanf("%d", &o);
  compare(m, n);
  compare(m, o);
  compare(n, o);
}


void compare(int a, int b) {
  if (a > b) {
    printf("%d > %d\n", a, b);
  } else if (a < b) {
    printf("%d < %d\n", a, b);
  } else {
    printf("%d = %d\n", a, b);
  }
}
