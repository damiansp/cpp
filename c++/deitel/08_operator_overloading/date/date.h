#ifndef DATE_H
#define DATE_H

#include <iostream>


class Date {
  friend ostream& operator<<(ostream&, const Date&);

 public:
  Date(int m=1, int d=1, int y=1);
  void set_date(int, int, int);
  Date& operator++();
  Date operator++();
  const Date& operator+=(int);
  bool is_leap_year(int) const;
  bool is_end_of_month(int) const;

 private:
  int month;
  int day;
  int year;
  static cont int days[];

  void help_increment();
};


#endif
