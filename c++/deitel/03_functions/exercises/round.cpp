#include <cmath>
#include <iostream>
using namespace std;


int round_it(double x) {
  return floor(x + 0.5);
}


int main() {
  for (double i = 0.; i <= 1.; i += 0.1) {
    cout << i << " -> " << round_it(i) << endl;
  }
  return 0;
}
