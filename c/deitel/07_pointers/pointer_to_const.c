#include <stdio.h>


void print_chars(const char *sp);


int main(void) {
  char s[] = "here's my big ol' string";

  printf("s:\n");
  print_chars(s);
  printf("\n");
  return 0;
}


// read-only
void print_chars(const char *sp) {
  for (; *sp != '\0'; sp++) { printf("%c", *sp); }
}
