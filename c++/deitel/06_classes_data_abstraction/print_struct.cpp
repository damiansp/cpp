#include <iostream>
using namespace std;


struct Time {
  int hour;    // [0, 23]
  int minute;  // [0, 59]
  int second;  // [0, 59]
};


void print_military(const Time&);
void print_standard(const Time&);


int main() {
  Time dinner_time;

  dinner_time.hour = 18;
  dinner_time.minute = 30;
  dinner_time.second = 0;
  cout << "Dinner will be served at ";
  print_military(dinner_time);
  cout << "\nFor you civilians, that's " ;
  print_standard(dinner_time);
  // Set bad values
  dinner_time.hour = 29;
  dinner_time.minute = 72;
  cout << "\n\nBad time: ";
  print_military(dinner_time);
  cout << endl;
}


void print_military(const Time& t) {
  cout << (t.hour < 10 ? "0" : "") << t.hour << ":"
       << (t.minute < 10 ? "0" : "") << t.minute;
}


void print_standard(const Time& t) {
  cout << ((t.hour == 0 || t.hour == 12) ? 12 : t.hour % 12) << ":"
       << (t.minute < 10 ? "0" : "") << t.minute << ":"
       << (t.second < 10 ? "0" : "") << t.second << ":"
       << (t.hour < 12 ? " AM" : " PM");
}
