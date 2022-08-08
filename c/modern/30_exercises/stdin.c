#include <stdio.h>


int main(void) {
  printf("Enter an int and a double: ");
  char buffer[50];
  int x;
  double d;
  if (fgets(buffer, 50, stdin) != NULL) {
    sscanf(buffer, "%d %lf", &x, &d);
    printf("Got %d and %lf\n", x, d);
  } else { printf("No characters read\n"); }
}
