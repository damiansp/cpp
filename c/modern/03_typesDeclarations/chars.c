#include <stdio.h>


int main() {
  char c = 'a';
  char unknown = 255;
  printf("%c: %d\n", c, c);
  printf("Size of char: %c: %zi (bytes)\n", c, sizeof(c));
  printf("The char value of 255 is: %d\n", unknown);
}
