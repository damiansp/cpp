#include <stdio.h>

#define MAX_STR 10


int main(void) {
  printf("Enter a string: ");
  char str[MAX_STR];
  if (fgets(str, MAX_STR + 1, stdin) != NULL) { printf("Got: %s\n", str); }
  else { printf("You had one job, loser\n"); }
}
