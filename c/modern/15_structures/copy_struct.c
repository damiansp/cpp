#include <stdio.h>


typedef struct {
  char c;
  int x;
  double d;
} MyStruct;


int main(void) {
  MyStruct s1 = {'a', 1, 1.0};
  MyStruct s2 = s1;  // copies
}
