#include <stdio.h>
#include <string.h>


int main() {
  const char* s = "This is a test";
  char c1 = 'a';
  char c2 = 'z';

  if (strchr(s, c1) != NULL) {
    printf("'%c' was found in '%s'\n", c1, s);
  } else {
    printf("'%c' was not found in '%s'\n", c1, s);
  }
  if (strchr(s, c2) != NULL) {
    printf("'%c' was found in '%s'\n", c2, s);
  } else {
    printf("'%c' was not found in '%s'\n", c2, s);
  }

  return 0;
}
