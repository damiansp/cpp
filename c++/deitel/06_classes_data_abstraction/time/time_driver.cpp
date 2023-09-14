#include <iostream>
using namespace std;

#include "time.h"


void increment_minutes(Time&, const int);


int main() {
  Time t;  // default settings

  t.set_hour(17);
  t.set_minute(34);
  t.set_second(22);
  cout << "All values set/retrieved manually:\n"
       << "  Hour: " << t.get_hour() << endl
       << "  Min:  " << t.get_minute() << endl
       << "  Sec:  " << t.get_second() << endl;

  t.set_hour(234);
  t.set_minute(41);
  t.set_second(74);
  cout << "Set with bad hour and second values\n"
       << "  Hour: " << t.get_hour() << endl
       << "  Min:  " << t.get_minute() << endl
       << "  Sec:  " << t.get_second() << endl;

  t.set_time(11, 58, 0);
  increment_minutes(t, 3);
  return 0;
}


void increment_minutes(Time &t, const int m) {
  cout << "Start time: ";
  t.print();
  cout << "\nIncrementing time by " << m << " minutes:\n";
  for (int i = 0; i < m; i++) {
    t.set_minute((t.get_minute() + 1) % 60);
    if (t.get_minute() == 0) {
      t.set_hour((t.get_hour() + 1) % 24);
    }
  }
  cout << "After incrementing: ";
  t.print();
  cout << endl;
}
