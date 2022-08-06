#include <stdio.h>

#define MAX_STR 10


int main(void) {
  printf("Enter a string: ");
  char str[MAX_STR + 1];  // +1 for \0
  fgets(str, MAX_STR, stdin);
  printf("Got: %s\n", str);
}
