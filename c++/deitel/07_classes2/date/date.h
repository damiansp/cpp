#ifndef DATE_H
#define DATE_H


class Date {
 public:
  Date(int=1900, int=1, int=1);
  void print() const;
  ~Date();

 private:
  int year;
  int month;
  int day;
  int check_day(int);
};

#endif
