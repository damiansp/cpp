#include <iostream>
using namespace std;

#include "Utility.h"


int main() {
  int x;

  cout << "Enter number: > ";
  cin >> x;

  if (isPrime(x)) {
    cout << "\n" << x << " is prime" << endl;
  } else {
    cout << "\n" << x << " is not prime" << endl;
  }

  if (is2MorePrime(x)) {
    cout << "\n" << x << " + 2 is prime" << endl;
  } else {
    cout << "\n" << x << " + 2 is not prime" << endl;
  }
  return 0;
}
