#include <iostream>
using namespace std;


int reverse_digits(int n) {
  int out = 0;
  while (n > 9) {
    int last_digit = n % 10;
    out = 10*out + last_digit;
    n /= 10;
  }
  out = 10*out + n;
  return out;
}


int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << reverse_digits(n) << endl;
  return 0;
}
