#ifndef TIME_H
#define TIME_H


class Time {
 public:
  Time();  // constructor
  void set_time(int, int, int);  // h, m, s
  void print();
  void print_military();
 private:
  int hour;
  int minute;
  int second;
};


#endif
