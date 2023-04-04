#include <stdio.h>

enum MONTHS {
  JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};


int main() {
  const char* month_name[] = {
    "", "January", "February", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"};

  for (enum MONTHS month = JAN; month <= DEC; ++month) {
    printf("%2d%11s\n", month, month_name[month]);
  }
  return 0;
}
