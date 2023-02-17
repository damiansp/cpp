#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "This is a test";
  const char* s2 = "beware";

  printf(
    "Of the characters in '%s', '%c' appears the earliest in '%s'\n",
    s2, *strpbrk(s1, s2), s1);
}
