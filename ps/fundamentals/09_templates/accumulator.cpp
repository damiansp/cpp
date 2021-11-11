#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "accum.h"


int main() {
  Accum<int> ints(0);
  ints += 3;
  ints += 7;
  cout << ints.getTotal() << endl;

  Accum<string> s("");
  s += "Hello";
  s += ", ";
  s += "World!";
  cout << s.getTotal() << endl;

  return 0;
}
