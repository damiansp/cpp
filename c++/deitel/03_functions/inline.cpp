#include <iostream>
using namespace std;


inline double cube(const double s) { return s * s * s; }


int main() {
  cout << "Enter cube dimension: ";
  double side;
  cin >> side;
  cout << "Volume of cube is " << cube(side) << endl;
  return 0;
}
