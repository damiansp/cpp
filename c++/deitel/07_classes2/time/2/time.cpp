#include <iostream>
using namespace std;

#include "time.h"


Time::Time(int h, int m, int s) { set_time(h, m, s); }


Time &Time::set_time(int h, int m, int s) {
  set_hour(h);
  set_minute(m);
  set_second(s);
  return *this;
}


Time &Time::set_hour(int h) {
  hour = (h >= 0 && h < 24) ? h : 0;
  return *this;
}


Time &Time::set_minute(int m) {
  minute = (m >= 0 && m < 60) ? m : 0;
  return *this;
}


Time &Time::set_second(int s) {
  second = (s >= 0 && s < 60) ? s : 0;
  return *this;
}


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
