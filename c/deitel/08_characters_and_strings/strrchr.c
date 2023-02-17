#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "A zoo has many animals, like zebras";
  int c = 'z';

  printf(
    "The substring of s1, beginning with the last occurrence of 'z', is: %s\n",
    strrchr(s1, c));
}
