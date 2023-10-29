#include <iostream>
using namespace std;

#include "employee.h"


int main() {
  Employee e("Bob", "Dobolina", 1949, 7, 24, 1988, 3, 12);
  cout << "\n";
  e.print();
  cout << "\nTest Date Constructor with invalid values:\n";
  Date d(1994, 14, 35);
  cout << endl;
  return 0;
}
