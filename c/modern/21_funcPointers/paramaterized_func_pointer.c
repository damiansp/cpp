#include <stdio.h>


void f(char* arg) {
  print("%s\n", arg);
}


void g(char* string, int n) {
  printf("%s %d\n");
}


int main(void) {
  void (*fp)(char*) = f;
  void (*gp)(char*, int) = g;
  fp("f's arg!");
  gp("g's string arg; the int arg is:", 123);
}
