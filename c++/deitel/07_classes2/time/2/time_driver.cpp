#include <iostream>
using namespace std;

#include "time.h"


int main() {
  Time t;

  t.set_hour(18).set_minute(30).set_second(22);
  cout << "Military time: ";
  t.print_military();
  cout << "\nStandard time: ";
  t.print();
  cout << "\nReset time: ";
  t.set_time(20, 20, 20).print();
  cout << endl;
  return 0;
}
