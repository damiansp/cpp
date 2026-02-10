/* str_len: return length of string <s> */
int str_len(char s[]) {
  int i = 0;

  while (s[i] != '\0') { ++i; }
  return i;
}
