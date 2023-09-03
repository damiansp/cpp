#include <iostream>

#include "time.h"
using namespace std;


Time::Time(int hr, int min, int s) { set_time(hr, min, s); }


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
