#include <iostream>
using namespace std;


class Time {
public:
  Time();
  void set_time(int, int, int);
  void print_military();
  void print();
private:
  int hour;
  int minute;
  int second;
}
