#include <stdio.h>
#include "calc.h"

#define MAXVAL 100    // max depth of val stack


int sp = 0;
double val[MAXVAL];


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


