#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
 public:
  Complex(double, double=0);
  Complex add(Complex);
  void print();

 private:
  double real;
  double imaginary;
};


#endif
