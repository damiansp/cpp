#include <stdio.h>
#include <string.h>


int main() {
  char s1[] = "ABCDEFG";
  char s2[] = "ABCDXYZ";

  printf("s1: %s\ns2: %s\n", s1, s2);
  printf("memcmp(s1, s2, 4): %d\n", memcmp(s1, s2, 4));
  printf("memcmp(s1, s2, 7): %d\n", memcmp(s1, s2, 7));
  printf("memcmp(s2, s1, 7): %d\n", memcmp(s2, s1, 7));
}
