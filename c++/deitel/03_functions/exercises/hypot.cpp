#include <cmath>
#include <iostream>
using namespace std;


double get_hypoteneuse(double a, double b) {
  return sqrt(a*a + b*b);
}


int main() {
  cout << "hypot(3, 4) = " << get_hypoteneuse(3, 4) << endl;
  cout << "hypot(5, 12) = " << get_hypoteneuse(5, 12) << endl;
  cout << "hypot(8, 15) = " << get_hypoteneuse(8, 15) << endl;
  cout << "hypot(1, 1) = " << get_hypoteneuse(1, 1) << endl;
}
