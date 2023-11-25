#include <iostream>
using namespace std;

#include "interface.h"


int main() {
  Interface i(5);

  cout << "Interface contains: " << i.get_value() << " before set_value()"
       << endl;
  i.set_value(10);
  cout << "Interface contains: " << i.get_value() << " after set_value()"
       << endl;
  return 0;
}
