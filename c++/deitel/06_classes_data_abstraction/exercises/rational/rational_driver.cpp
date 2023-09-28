#include <iostream>
using namespace std;

#include "rational.h"


int main() {
  Rational r1 = Rational(1, 2);
  Rational r2 = Rational(2, 3);
  Rational sum = r1.add(r2);

  r1.print();
  cout << " + ";
  r2.print();
  cout << " = ";
  sum.print();
  cout << endl;
  return 0;
}
