#include <iostream>
using namespace std;

#include "rational.h"


int main() {
  Rational r1 = Rational(1, 2);
  Rational r2 = Rational(2, 3);
  Rational sum = r1.add(r2);
  Rational prod = r1.multiply(r2);

  r1.print();
  cout << " + ";
  r2.print();
  cout << " = ";
  sum.print();
  cout << endl;
  sum.print();
  cout << " - ";
  r1.print();
  cout << " = ";
  sum.subtract(r1).print();
  cout << endl;
  r1.print();
  cout << "(";
  r2.print();
  cout << ") = ";
  prod.print();
  cout << "\n(";
  prod.print();
  cout << ") / (";
  r1.print();
  cout << ") = ";
  prod.divide(r1).print();
  cout << endl;
  return 0;
}
