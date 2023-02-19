#include <stdio.h>
#include <string.h>


int main() {
  const char* s = "This is a string";

  printf(
    "The remainder of s from char 'r' is: %s\n", (char *) memchr(s, 'r', 16));
  return 0;
}
