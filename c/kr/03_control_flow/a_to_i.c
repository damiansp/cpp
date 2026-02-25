#include <ctype.h>

/* parse int from string */
int a_to_i(char s[]) {
  int i, n, sign;

  for (i = 0; isspace(s[i]); i++) { ; }  // skip whitespace
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') { i++; }  // skip sign
  for (n = 0; isdigit(s[i]); i++) { n = 10*n + (s[i] - '0'); }
  return sign * n;
}
