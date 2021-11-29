#include "Person.h"


int doubleIt(int const& x) { return 2 * x; }


int main() {
  int i = 3;
  int const ci = 3;

  i = 4;
  int& ri = i;

  ri = 5;
  int const& cri = i;

  int j = 10;
  int doubleJ = doubleIt(j);
  int double10 = doubleIt(10);

  Person bob("Bob", "Dobolina", 45);
  bob.setAge(46);

  Person const cBob = bob;
  //cBob.setAge(44)
  int bobAge = cBob.getAge();

  int* pi = &i;
  int const* pci = pi;
  pci = &j;
  
  return 0;
}
