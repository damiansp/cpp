#include <stdio.h>

#define BUFFSIZE 100  // buffer for getch/ungetch


static char buff[BUFFSIZE];  // static confines use to this file
static int buffp = 0;  // next free position in <buff>

/* get a (possibly pushed back) character */
int getch() {
  return (buffp > 0) ? buff[--buffp] : getchar();
}


/* push character back on buffer/input */
void ungetch(int c) {
  if (buffp >= BUFFSIZE) { printf("ungetch: too many characters\n"); }
  else { buff[buffp++] = c; }
}
