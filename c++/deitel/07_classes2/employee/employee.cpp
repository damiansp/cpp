#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;

#include "employee.h"


int Employee::count = 0;  // static data member


int Employee::get_count() { return count; }


Employee::Employee(const char* first_name, const char* last_name) {
  name = new char[strlen(first_name) + 1];
  assert(name != 0);  // ensure memory allocated
  strcpy(name, first_name);
  surname = new char[strlen(last_name) + 1];
  assert(surname != 0);
  strcpy(surname, last_name);
  ++count;
  cout << "Employee constructor called for " << surname << ", " << name << "." << endl;
}


Employee::~Employee() {
  cout << "Destructor called for " << surname << ", " << name << "." << endl;
  delete [] name;  // free memory
  delete [] surname;
  --count;
}


const char* Employee::get_name() const { return name; }


const char* Employee::get_surname() const { return surname; }
