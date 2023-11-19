#include <iostream>
using namespace std;

#include "employee.h"


int main() {
  cout << "N employees at start: " << Employee::get_count() << endl;

  Employee* e1p = new Employee("Suzie Ann", "Baker");
  Employee* e2p = new Employee("Robert", "Macnamara Jones");

  cout << "N after instantiation: " << e1p->get_count();
  cout << "\n\nEmp. 1: " << e1p->get_surname() << ", " << e1p->get_name();
  cout << "\nEmp. 2: " << e2p->get_surname() << ", " << e2p->get_name()
       << "\n\n";
  delete e1p; // recapture memory
  e1p = 0;
  delete e2p;
  e2p = 0;
  cout << "N after deletion: " << Employee::get_count() << endl;
  return 0;
}
