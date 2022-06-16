#include <stdio.h>


int main(void) {
  int miles = 26,
    yards = 385;
  double km = 1.609 * (miles + yards/1760.0);
  printf("A marathon is %lfkm.\n", km);
  return 0;
}
