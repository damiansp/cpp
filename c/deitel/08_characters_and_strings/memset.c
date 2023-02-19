#include <stdio.h>
#include <string.h>


int main() {
  char s1[15] = "BBBBBBBBBBBBBB";

  printf("s1: %s\n", s1);
  printf("After memset: %s\n", (char *) memset(s1, 'b', 7));
}
