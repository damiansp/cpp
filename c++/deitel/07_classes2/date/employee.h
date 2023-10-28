#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include "date.h"


class Employee {
 public:
  Employee(char*, char*, int, int, int, int, int, int);
  void print() const;
  ~Employee();

 private:
  char name[25];
  char surname[25];
  const Date birth_date;
  const Date hire_date;
};


#endif
