#ifndef TIME_H
#define TIME_H


class Time {
 public:
  Time(int=0, int=0, int=0);  // constructor
  void set_time(int, int, int);  // h, m, s
  void set_hour(int);
  void set_minute(int);
  void set_second(int);
  int get_hour();
  int get_minute();
  int get_second();
  void tick();
  void print();
  void print_military();
  //int& bad_set_hour(int);  // dangerous to return a ref to private member
 private:
  int hour;
  int minute;
  int second;
};


#endif
