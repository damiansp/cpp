#include <iostream>
using namespace std;

#include "rational.h"


Rational::Rational(int num, int denom) {
  numerator = num;
  denominator = denom;
}


void Rational::print() {
  cout << numerator << "/" << denominator;
}


Rational Rational::add(Rational other) {
  int n1 = numerator,
    n2 = other.numerator,
    d = denominator;

  if (denominator != other.denominator) {
    n1 = numerator * other.denominator;
    n2 = other.numerator * denominator;
    d = denominator * other.denominator;
  }
  return Rational(n1 + n2, d);
}


Rational Rational::subtract(Rational other) {
  return add(Rational(-other.numerator, other.denominator));
}


Rational Rational::multiply(Rational other) {
  return Rational(
    numerator * other.numerator, denominator * other.denominator);
}


Rational Rational::divide(Rational other) {
  return multiply(Rational(other.denominator, other.numerator));
}
