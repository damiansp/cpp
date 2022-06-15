#include <stdio.h>


int main() {
  int miles = 26,
    yards = 385;
  double km = 1.609 * (miles + yards / 1760.0);
  printf("\nA marathon is %lf km.\n\n", km);
  return 0;
}
