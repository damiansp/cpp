#include <stdio.h>


int main() {
  char c = 'A';
  char s[] = "This is a string";
  const char* sp = "Yet another string";

  printf("%c\n", c);
  printf("%s\n", s);
  printf("%s\n", sp);
  return 0;
}
