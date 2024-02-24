#include <iostream>
using namespace std;

#include "intset.h"


int main() {
  IntegerSet s1 = IntegerSet();
  s1.print();
  cout << endl;

  s1.push(25);
  s1.print();
  cout << endl;

  s1.push(50);
  s1.print();
  cout << endl;
}
