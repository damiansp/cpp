#include <iostream>
using namespace std;


int intpow(int base, int exp) {
  int answer = 1;
  for (int i = 1; i <= exp; i++) {
    answer *= base;
  }
  return answer;
}


int main() {
  cout << "5^0 = " << intpow(5, 0) << endl;
  cout << "4^1 = " << intpow(4, 1) << endl;
  cout << "3^2 = " << intpow(3, 2) << endl;
  cout << "2^3 = " << intpow(2, 3) << endl;
  cout << "1^4 = " << intpow(1, 4) << endl;
  return 0;
}
