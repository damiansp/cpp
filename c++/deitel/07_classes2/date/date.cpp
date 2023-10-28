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
  count << endl;
}
