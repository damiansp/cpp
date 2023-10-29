#include <iostream>
using namespace std;

#include "date.h"


Date::Date(int yr, int mo, int dy) {
  if (mo > 0 &&  mo <= 12) { month = mo; }
  else {
    month = 1;
    cout << "Month " << mo << " invalid; set to 1\n";
  }
  year = yr;
  day = check_day(dy);
  cout << "Date object constructor for date ";
  print();
  cout << endl;
}


void Date::print() const { cout << year << "-" << month << "-" << day; }


Date::~Date() {
  cout << "Date object destructor for date";
  print();
  cout << endl;
}


int Date::check_day(int test_day) {
  static const int days_in_months[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (test_day > 0 && test_day <= days_in_months[month]) { return test_day; }
  // leap year check
  if (month == 2
      && test_day == 29
      && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
    return test_day;
  }
  cout << "Day " << test_day << " invalid. Set day to 1.\n";
  return 1;
}
