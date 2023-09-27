#include <iostream>
using namespace std;

#include "complex.h"


Complex::Complex(double re, double im) {
  real = re;
  imaginary = im;
}


Complex Complex::add(Complex other) {
  return Complex(other.real + real, other.imaginary + imaginary);
}


void Complex::print() {
  cout << real << showpos << imaginary << "i" << noshowpos;
}
