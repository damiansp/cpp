#include <iostream>
using namespace std;

#include "Person.h"


int main() {
  int a = 3;
  cout << "a is " << a << endl;

  int& rA = a;
  rA = 5;
  cout << "a is " << a << endl;

  Person bob("Bob", "Dobolina", 45);
  Person& rBob = bob;
  rBob.setAge(46);
  cout << "rBob: " << rBob.getName() << ", age: " << rBob.getAge() << endl;

  int* pA = &a;
  *pA = 4;
  cout << "a is " << a << endl;

  int b = 100;
  pA = &b;
  (*pA)++;
  cout << "a: " << a << "; *pA: " << *pA << endl;

  Person* pBob = &bob;
  (*pBob).setAge(46);
  pBob->setAge(49);
  cout << "Bob: " << bob.getName() << ", age: " << bob.getAge() << endl;
}
