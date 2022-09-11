#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int n;
  char c;
  printf("Please enter a number between 1 and 3: ");
  scanf("%d", &n);
  switch (n) {
  case 1:
    printf("%d is the loneliest number\n", n); break;
  case 2:
    printf("%d is the loneliest number since the number %d\n", n, n - 1);
    break;
  case 3:
    printf("%d's company, just ask Mr. Roper!\n", n); break;
  default:
    printf("Not very good with directions, are you?  You lose.\n"); break;
  }
  
  printf("Please enter a character between a and c: ");
  scanf("%c", &c);
  switch (c) {
  case 'a':
    printf("'%c' is for Auntie Annie's alligator\n", c); break;
  case 'A':
    printf("'%c' is for Auntie Annie's alligator\n", c); break;
  case 'b':
        printf("'%c' is for Bad boy Big-Belly Bob\n", c); break;
  case 'B':
    printf("'%c' is for Bad boy Big-Belly Bob\n", c); break;
  case 'c':
    printf("'%c' is for a Chorus of crazy cackling Cassidys\n", c); break;
  case 'C':
    printf("'%c' is for a Chorus of crazy cackling Cassidys\n", c); break;
  default:
    printf("Not very good with directions, are you?  You lose.\n"); break;
  }
  return 0;
}
