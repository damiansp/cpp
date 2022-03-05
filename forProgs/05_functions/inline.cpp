#include <iostream>
using namespace std;


inline double cube(double side) {
  return side * side * side;
}


int main() {
  double dim;
  cout << "Enter cube dimension: ";
  cin >> dim;
  cout << "Volume of cube with sides " << dim << " is " << cube(dim) << endl;
}
