#include <stdio.h>


typedef int MyInt;  // MyInt aliases int

typedef char* MyString;


int main(void) {
  MyInt x = 123;
  MyString s = "Hello, World!";
  printf("x = %d\n", x);
  printf("s = %s\n", s);
}
