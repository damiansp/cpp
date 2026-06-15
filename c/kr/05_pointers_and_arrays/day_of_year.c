static char daytab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};


/* set day of year for month & day */
int day_of_year(int year, int month, int day) {
  int i, is_leap;

  is_leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
  for (i = 1; i < month; i++) { day += daytab[is_leap][i]; }
  return day;
}


/* set month and day from day of year */
void month_day(int year, int yearday, int* pmonth, int* pday) {
  int i, is_leap;

  is_leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
  for (i = 1; yearday > daytab[is_leap][i]; i++) {
    yearday -= daytab[is_leap][i];
  }
  *pmonth = i;
  *pday = yearday;
}
