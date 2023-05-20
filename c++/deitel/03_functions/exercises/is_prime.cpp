#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


bool is_prime(unsigned int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}


int main() {
  cout << "Primes between 1 and 1,000:" << endl;
  for (int i = 2; i <= 1000; i++) {
    if (is_prime(i)) {
      cout << setw(5) << i;
    }
  }
  cout << endl;
  return 0;
}
