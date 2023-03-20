#include <stdio.h>


union number {
  int x;
  double y;
};


int main() {
  union number val;

  val.x = 100;
  printf("Put 100 in int member and print both:\n");
  printf("int:   %d\n", val.x);
  printf("float: %f\n", val.y);

  val.y = 100.1;
  printf("Put 100.1 in floatt member and print both:\n");
  printf("int:   %d\n", val.x);
  printf("float: %f\n", val.y);
  return 0;
}
