#include <stdio.h>


int main() {
  int month = 0,
    day = 0,
    year = 0;

  printf("Enter a date: YYYY-MM-DD: ");
  scanf("%d%*c%d%*c%d", &year, &month, &day);
  printf("Got day %d of month %d of year %d\n", day, month, year);
}
