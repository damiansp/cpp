#include <stdio.h>


int main() {
  double a, b, c;

  puts("Enter 3 space-separated floats: ");
  scanf("%le%lf%lg", &a, &b, &c);
  puts("Inputs in plain floating-point notation:\n");
  printf("%f\n%f\n%f\n", a, b, c);
}
