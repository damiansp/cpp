#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>   // atof

#define MAXOP 100     // max size of operand or operator
#define NUMBER '0'    // signal that number was found
#define MAXVAL 100    // max depth of val stack
#define BUFFSIZE 100  // buffer for getch/ungetch


int sp = 0;
double val[MAXVAL];
char buff[BUFFSIZE];
int buffp = 0;  // next free position in <buff>

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);


int main() {
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {
    switch (type) {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '-':
      push(pop() - pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '/':
      op2 = pop();
      if (op2 != 0.0) { push(pop() / op2); }
      else { printf("Error: zero division\n"); }
      break;
    case '\n':
      printf("\t%.8g\n", pop());
      break;
    default:
      printf("Error: unknown command: %s\n", s);
      break;
    }
  }
  return 0; 
}


/* get the next operator or operand */
int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t') { ; }
  s[1] = '\0';
  if (!isdigit(c) && c != '.') { return c; }  // not a number

  i = 0;
  if (isdigit(c)) {
    while (isdigit(s[++i] = c = getch())) { ; }  // get integer part
  }
  if (c == '.') {
    while (isdigit(s[++i] = c = getch())) { ; }  // get decimal part
  }
  s[i] = '\0';
  if (c != EOF) { ungetch(c); }
  return NUMBER;
}


/* get a (possibly pushed back) character */
int getch() {
  return (buffp > 0) ? buff[--buffp] : getchar();
}


/* push character back on buffer/input */
void ungetch(int c) {
  if (buffp >= BUFFSIZE) { printf("ungetch: too many characters\n"); }
  else { buff[buffp++] = c; }
}


/* push <f> onto <val> stack */
void push(double f) {
  if (sp < MAXVAL) { val[sp++] = f; }
  else {
    printf("Error: stack full, can't push %g\n", f);
  }
}


/* pop and return value from <val> stack */
double pop() {
  if (sp > 0) { return val[--sp]; }
  else {
    printf("Error: stack empt\n");
    return 0.0;
  }
}


