#ifndef HOURLY_H
#define HOURLY_H


#include "employee.h"


class HourlyWorker: public Employee {
 public:
  HourlyWorker(const char*, const char*, double, double);
  double get_pay() const;
  void print() const;

 private:
  double wage;
  double hours;
};


#endif 
