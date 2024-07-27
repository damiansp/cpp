#include <iostream>
using namespace std;

#include "complex.h"


Complex::Complex(double r, double i): real(r), imaginary(i) { ; }


Complex Complex::operator+(const Complex& other) const {
  return Complex(real + other.real, imaginary + other.imaginary);
}


Complex Complex::operator-(const Complex& other) const {
  return Complex(real - other.real, imaginary - other.imaginary);
}


const Complex& Complex::operator=(const Complex& right) {
  real = right.real;
  imaginary = right.imaginary;
  return *this;
}


void Complex::print() const {
  cout << real << '+' << imaginary << 'i';
}
