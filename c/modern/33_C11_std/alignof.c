#include <stdalign.h> // _Alignof -> alignof
#include <stdio.h>


struct S {
  char c;
  char d;
};


struct T {
  char c;
  int x;
};


int main(void) {
  printf("align of char: %zu\n", alignof(char));
  printf("align of int: %zu\n", alignof(int));
  printf("align of S (char, char): %zu\n", aolignof(struct S));
  printf("align of S (char, int): %zu\n", alignof(struct T));
}
