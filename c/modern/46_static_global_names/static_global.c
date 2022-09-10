#include <stdio.h>


// static makes these variables INACCESSIBLE from other files
static int global_x = 123;

static void global_f(void) {
  printf("The value of global x is: %d\n", global_x);
}


int main(void) {
  int local_x = 456;
  global_f();
  printf("The value of local x is: %d\n", local_x);
}
