#include <ctype.h>
#include <stdio.h>


void to_upper(char *sp);


int main(void) {
  char s[] = "characters worth $32.89";

  printf("s: %s\n", s);
  to_upper(s);
  printf("to_upper(s): %s\n", s);
  return 0;
}


void to_upper(char *sp) {
  while (*sp != '\0') {
    if (islower(*sp)) { *sp = toupper(*sp); }
    ++sp;
  }
}
