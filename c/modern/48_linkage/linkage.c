#include <stdio.h>


int y = 234;         // external linkage (by default)
static int x = 123;  // internal linkage


void g() {           // external
  printf("y = %d\n", y);
}


static void f() {    // internal
  printf("x = %d\n", x);
}


int main(void) {
  printf("Calling a global function with internal linkage:\n");
  f();
  printf("Calling a global function with external linkage:\n");
  g();

  int z = 345; // no linkag
  printf("Value of no-linkage z: %d\n", z);
}
