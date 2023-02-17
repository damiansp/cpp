#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "The value is 3.14159";
  const char* s2 = "aehi lsTuv";

  printf(
    "s1: %s\ns2: %s\nThe length of the substring of s1 containing only "
    "characters from s2 is %lu\n",
    s1, s2, strspn(s1, s2));
}
