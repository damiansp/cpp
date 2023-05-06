#include <iostream>
using namespace std;


int square(int x) { return x * x; }
double square(double x) { return x * x; }


int main() {
  int x = 7;
  double y = 7.7;

  cout << x << "^2 = " << square(x)
       << "\n" << y << "^2 = " << square(y) << endl;
  return 0;
}
