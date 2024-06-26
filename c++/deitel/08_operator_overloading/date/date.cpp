#include <iostream>
#include "date.h"


const int Date::days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Date::Date(int y, int m, int d) { set_date(y, m, d); }

void Date::set_date(int y, int m, int d) {
  year = (y >= 1900 && y <= 2400) ? y : 1900;
  month = (m >= 1 && m <=12) ? m : 1;
  if (month == 2 && is_leap_year(year)) {
    day = (d >= 1 && d <= 29) ? d : 1;
  } else {
    day = (d >= 1 && d <= days[month]) ? d : 1;
  }
}


Date& Date::operator++() {
  help_increment();
  return *this;
}


Date Date::operator++(int) {
  Date temp = *this;
  help_increment();
  return temp;
}


const Date& Date::operator+=(int days) {
  for (int i = 0; i < days; i++) { help_increment(); }
  return *this;
}


bool Date::is_leap_year(int y) const {
  if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) { return true; }
  return false;
}


bool Date::is_end_of_month(int d) const {
  if (month == 2 && is_leap_year(year)) { return d == 29; }
  return d == days[month];
}


void Date::help_increment() {
  if (is_end_of_month(day) && month == 12) {
    day = 1;
    month = 1;
    ++year;
  } else if (is_end_of_month(day)) {
    day = 1;
    ++month;
  } else { ++day; }
}


ostream& operator<<(ostream& output, const Date& d) {
  static char* month_names[13] = {
    "", "January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"};
  output << month_names[d.month] << ' ' << d.day << ", " << d.year;
  return output;
}
  
