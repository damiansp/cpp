#include <stdio.h>


int hex_to_int(char s[]);


int main() {
  printf("0: %d\n", hex_to_int("0"));
  printf("1: %d\n", hex_to_int("1"));
  printf("2: %d\n", hex_to_int("2"));
  printf("9: %d\n", hex_to_int("9"));
  printf("a: %d\n", hex_to_int("a"));
  printf("A: %d\n", hex_to_int("A"));
  printf("b: %d\n", hex_to_int("b"));
  printf("F: %d\n", hex_to_int("F"));
  printf("10: %d\n", hex_to_int("10"));
  printf("19: %d\n", hex_to_int("19"));
  printf("1a: %d\n", hex_to_int("1a"));
  printf("99: %d\n", hex_to_int("99"));
  printf("9f: %d\n", hex_to_int("9f"));
  printf("a0: %d\n", hex_to_int("a0"));
  printf("ff: %d\n", hex_to_int("ff"));
}


/* convert hexadecimal s to int; e.g. 'a' -> 15 */
int hex_to_int(char s[]) {
  int i, n;

  n = 0;
  for (
       i = 0;
       (s[i] >= '0' && s[i] <= '9')
         || (s[i] >= 'a' && s[i] <= 'f')
         || (s[i] >= 'A' && s[i] <= 'F');
       ++i) {
    if (s[i] >= 'a' && s[i] <= 'f') {
      n = 16*n + (s[i] - 'a' + 10);
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      n = 16*n + (s[i] - 'A' + 10);
    } else {
      n = 16*n + (s[i] - '0');
    }
  }
  return n;
}

