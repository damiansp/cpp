#include <stdlib.h>
#include <stdio.h>
#include <stdnoreturn.h>  // noreturn() instead of _Noreturn()


noreturn void just_exit() {
  printf("This function does not return. Exiting...\n");
  exit(0);
}


int main(void) { just_exit(); }
