#include <stdio.h>


int main(void) {
  int miles,
    yards;
  double km;
  printf("How many miles? > ");
  scanf("%d", &miles);
  printf("How many yards? > ");
  scanf("%d", &yards);
  km = 1.609 * (miles + yards/1760.0);
  printf("%d miles and %d yards = %f km\n", miles, yards, km);
  return 0;
}
