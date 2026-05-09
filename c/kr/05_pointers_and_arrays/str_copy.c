/* copy t to s, array subscript version */
void str_copy(char* s, char* t) {
  int i;

  i = 0;
  while ((s[i] = t[i]) != '\0') {
    i++;
  }
}


/* pointer version */
void str_copy2(char* s, char* t) {
  while ((*s = *t) != '\0') {
    s++;
    t++;
  }
}


/* pointer version 2 */
void str_copy3(char* s, char* t) {
  while ((*s++ = *t++) != '\0') { ; }
}


/* pointer version 3 */
void str_copy4(char* s, char* t) {
  while (*s++ = *t++) { ; }

