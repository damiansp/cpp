#ifndef RATIONAL_H
#define RATIONAL_H


class Rational {
 public:
  Rational(int, int);
  void print();
  //void reduce();
  Rational add(Rational);
  Rational subtract(Rational);
  Rational multiply(Rational);
  Rational divide(Rational);
  
 private:
  int numerator;
  int denominator;    
};

#endif
