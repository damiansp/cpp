#include <iostream>
using namespace std;


double pow(double base, int exp) {
  if (exp == 0) {
    return 1.;
  }
  if (exp == 1) {
    return base;
  }
  return base * pow(base, exp - 1);
}


int main() {
  double base = 2.0;
  for (int exp = 4; exp >= 0; exp--) {
    cout << base << "^" << exp << " = " << pow(base, exp) << endl;
    base += 1.1;
  }
  return 0;
}
