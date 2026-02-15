/* convert s to int; e.g. '1234' -> 1234 */
int a_to_i(char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10*n + (s[i] - '0');
  }
  return n;
}

