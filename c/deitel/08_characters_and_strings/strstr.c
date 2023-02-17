#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "abcdefabcdef";
  const char* s2 = "def";

  printf(
    "s1: %s\ns2: %s\nRemainder of string starting with first occurrence of "
    "s2: %s\n",
    s1, s2, strstr(s1, s2));
}
