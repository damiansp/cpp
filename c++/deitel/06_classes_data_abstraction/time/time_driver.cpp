#include <iostream>

#include "time.h"
using namespace std;


int main() {
  Time t;  // default settings

  cout << "Initial time: ";
  t.print_military();
  cout << "; ";
  t.print();

  t.set_time(13, 27, 6);
  cout << "\n\nUpdated: ";
  t.print_military();
  cout << "; ";
  t.print();

  t.set_time(99, 88, 77);  // intentionally invalid values
  cout << "\n\nWith invalid values: ";
  t.print_military();
  cout << "; ";
  t.print();
  cout << endl;
  return 0;
}
