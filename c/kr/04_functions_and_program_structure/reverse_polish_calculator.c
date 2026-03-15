#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  // atof

#define MAXOP 100    // max size of operand or operator
#define NUMBER '0'   // signal that number was found
#define MAXVAL 100   // max depth of val stack


int sp = 0;
double val[MAXVAL];

int getop(char []);
void push(double);
double pop(void);


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


// getop()


/* push <f> onto <val> stack */
void push(double f) {
  if (sp < MAXVAL) { val[sp++] = f; }
  else {
    printf("Error: stack full, can't push %g\n", f);
    return 0.0;
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
