/* convert integer to string */
void i_to_a(int n, char s[]) {
  int i, sign;
  
  if ((sign = n) < 0) { n = -n; }  // record sign
  i = 0;
  // generate digits in reverse order
  do { s[i++] = n % 10 + '0'; }    // get next digit
  while ((n /= 10) > 0);           // delete it
  if (sign < 0) { s[i++] = '-'; }
  s[i] = '\0';
  reverse(s);
  }
}
