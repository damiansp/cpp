#include <iostream>
using namespace std;


class Time {
public:
  Time();
  void set_time(int, int, int);
  void print();
  void print_military();
private:
  int hour;
  int minute;
  int second;
};


Time::Time() { hour = minute = second = 0; }


void Time::set_time(int hr, int min, int s) {
  hour = (hr >= 0 && hr < 24) ? hr : 0;
  minute = (min >= 0 && min < 60) ? min : 0;
  second = (s >= 0 && s < 60 ) ? s : 0;
}


void Time::print() {
  cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
       << (minute < 10 ? "0" : "") << minute << ":"
       << (second < 10 ? "0" : "") << second << ":"
       << (hour < 12 ? " AM" : " PM");
}


void Time::print_military() {
  cout << (hour < 10 ? "0" : "") << hour << ":"
       << (minute < 10 ? "0" : "") << minute;  
}


int main() {
  Time t;  // default settings

  cout << "Initial time: ";
  t.print_military();
  cout << "; ";
  t.print();

  t.set_time(13, 27, 6);
  cout << "\n\nUpdated: ";
  t.print_military();
  cout << "; ";
  t.print();

  t.set_time(99, 88, 77);  // intentionally invalid values
  cout << "\n\nWith invalid values: ";
  t.print_military();
  cout << "; ";
  t.print();
  cout << endl;
  return 0;
}
