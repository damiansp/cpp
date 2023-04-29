#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setiosflags;
using std::setprecision;
using std::setw;

#include <cmath>


int main() {
  double amt,
    princ = 1000.,
    r = 0.05;

  cout << "Year" << setw(10) << "Amount" << endl;
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
  for (int year = 1; year <= 10; year++) {
    amt = princ * pow(1. + r, year);
    cout << setw(4) << year << setw(10) << amt << endl;
  }
  return 0;
}
