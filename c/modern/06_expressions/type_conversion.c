#include <stdio.h>


int main() {
  char c = 'C';
  int x = (int) c;
  int y = 10;
  double z = (double) x / y;
  printf("(int) 'C': %d\n", x);
  printf("/10 = %f\n", z);
}
