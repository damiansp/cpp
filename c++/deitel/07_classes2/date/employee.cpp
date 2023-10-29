#include <cstring>
#include <iostream>
using namespace std;

#include "date.h"
#include "employee.h"


Employee::Employee(
    char* fname,
    char* sname,
    int byear,
    int bmonth,
    int bday,
    int hyear,
    int hmonth,
    int hday
): birth_date(byear, bmonth, bday), hire_date(hyear, hmonth, hday) {
  int len = strlen(fname);
  len = (len < 25 ? len : 24);
  strncpy(name, fname, len);
  name[len] = '\0';
  len = strlen(sname);
  len = (len < 25 ? len : 24);
  strncpy(surname, sname, len);
  surname[len] = '\0';
  cout << "Employee object constructor: " << name;
}


void Employee::print() const {
  cout << surname << ", " << name << "\nHired: ";
  hire_date.print();
  cout << "\nBirth Date: ";
  birth_date.print();
  cout << endl;
}


Employee::~Employee() {
  cout << "Employee destructor: " << surname << ", " << name << endl;
}
