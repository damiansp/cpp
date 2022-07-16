#include <stdio.h>


void print_msg(const char* arg) { printf("%s\n", arg); }


double divide(int a, double b) { return a / b; }


int main(void) {
  void (*fp1)(const char*) = print_msg;
  double (*fp2)(int, double) = divide;
  fp1("Function being called via a pointer");
  double quot = fp2(123, 456.789);
  printf("quot from pointed at function: %f\n", quot);
}
