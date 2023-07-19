#include <iostream>


int main() {
  int x, y;
  /* p is a const ptr to an int; the int can be modified through p, but p
     always points to same memory location */
  int* const p = &x;
  *p = 7;  // ok
  p = &y;  // nope
  return 0;
}
