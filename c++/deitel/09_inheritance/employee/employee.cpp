#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;

#include "employee.h"


Employee::Employee(const char* first, const char* last) {
  name = new char[strlen(first) + 1];
  assert(name != 0);
  strcpy(name, first);
  surname = new char[strlen(last) + 1];
  assert(surname != 0);
  strcpy(surname, last);
}


void Employee::print() const { cout << name << ' ' << surname; }


Employee::~Employee() {
  delete[] name;
  delete[] surname;
}
