#include <iostream>


void f(const int*);


int main() {
  int y = 0;
  f(&y);  // err: attempts illegal modification
  return 0;
}


void f(const int* xp) {
  *xp = 100;  // cannot modify const obj
}
