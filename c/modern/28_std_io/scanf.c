#include <stdio.h>


int main(void) {
  printf("Enter an int: ");
  int x;
  scanf("%d", &x);

  printf("\nEnter a character: ");
  char c;
  scanf("%c", &c);
  printf("\nGot int; %d and char %c\n", x, c);

  printf("Enter an int and a double (space-separated): ");
  double d;
  scanf("%d %lf", &x, &d);
  printf("\nGot %d and %f\n", x, d);
}
