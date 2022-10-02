#include <stdio.h>


void use_local(void);
void use_static_local(void);
void use_global(void);


int x = 1; // global


int main(void) {
  int x = 5; // local to main

  printf("Local x in outer scope of main: %d\n", x);
  { // new scope
    int x = 7;
    printf("Local x in inner scope of main: %d\n", x);
  }
  printf("Local x in outer scope of main: %d\n", x);
  use_local();
  use_static_local();
  use_global();
  use_local();
  use_static_local();
  use_global();
  printf("Local x in outer scope of main: %d\n", x);

  return 0;
}


void use_local(void) {
  int x = 25; // reinitialized each call

  printf("Local x in use_local is %d at start\n", x);
  x++;
  printf("Local x in use_local is %d after incementing\n", x);
}


void use_static_local(void) {
  static int x = 50; // initialized at first call only

  printf("Local static x in use_static_local is %d at start\n", x);
  x--;
  printf("Local static x in use_static_local is %d after decrementing\n", x);
}


void use_global(void) {
  printf("Global x is %d at start\n", x);
  x *= 10;
  printf("Global x is %d after increasing by a factor of 10\n", x);
}
