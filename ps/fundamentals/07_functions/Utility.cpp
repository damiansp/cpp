#include <iostream>
using namespace std;

#include "Utility.h"


bool isPrime(int x) {
  bool prime = true;
  for (int i = 2; i <= x / i; i++) {
    int factor = x / i;
    if (factor * i == x) {
      cout << "factor found: " << factor << endl;
      prime = false;
      break;
    }
  }
  return prime;
}


bool is2MorePrime(int x) {
  x += 2;
  return isPrime(x);
}
