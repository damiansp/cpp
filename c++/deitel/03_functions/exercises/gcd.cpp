#include <iostream>
using namespace std;


int gcd(int a, int b) {
  int greatest = 1;
  for (int i = 2; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      greatest = i;
    }
  }
  return greatest;
}


int main() {
  int a, b;
  cout << "Input 2 integers: ";
  cin >> a >> b;
  cout << "gcd(" << a << ", " << b << ") = " << gcd(a, b) << endl;
  return 0;
}
