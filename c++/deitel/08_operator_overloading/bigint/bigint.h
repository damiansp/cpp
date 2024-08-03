#ifndef BIGINT_H
#define BIGING_H


#include <iostream>
using namespace std;


class BigInt {
  friend ostream& operator<<(ostream&, const BigInt&);

 public:
  BigInt(long=0);
  BigInt(const char*);
  BigInt operator+(const BigInt&);
  BigInt operator+(int);
  BigInt operator+(const char*);

 private:
  short integer[30];
};


#endif
