#include <iostream>
using namespace std;

#include "time.h"


Time::Time(int hr, int min, int s) { set_time(hr, min, s); }


void Time::set_time(int hr, int min, int s) {
  set_hour(h);
  set_minute(min);
  set_second(s);
}


void Time::set_hour(int hr) { hour = (hr >= 0 && hr < 24) ? hr : 0; }


void Time::set_minute(int min) { minute = (min >= 0 && min < 60) ? min : 0; }


void Time::set_second(int s) { second = (s >= 0 && s < 60) ? s : 0; }


int Time::get_hour() { return hour; }


int Time::get_minute() { return minute; }


int Time::get_second() { return second; }


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
