#include <cmath>
#include <iostream>
using namespace std;


double round_it(double x, int decimal_places=0) {
  int factor = pow(10, decimal_places);
  return floor(x*factor + 0.5) / factor;
}


int main() {
  for (double i = 0.; i <= 1.; i += 0.1234) {
    cout << i << " -> " << round_it(i) << " -> " << round_it(i, 1) << " -> " 
         << round_it(i, 2) << endl;
  }
  return 0;
}
