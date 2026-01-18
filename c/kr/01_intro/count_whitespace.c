#include <stdio.h>


int main() {
  char c;
  int n_white = 0;
  while ((c = getchar()) != EOF) {
    if ((c == ' ') || (c == '\t') || (c == '\n')) { ++n_white; }
  }
  printf("N white: %d\n", n_white);
}
