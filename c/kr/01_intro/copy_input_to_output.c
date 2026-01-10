#include <stdio.h>


int main() {
  int c;

  /* 
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  */
  // more concisely:
  while ((c = getchar()) != EOF) { putchar(c); }
}
