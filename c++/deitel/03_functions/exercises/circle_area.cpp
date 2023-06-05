#include <iostream>
using namespace std;


inline double get_area(double r) {
  const double PI = 3.1415926;
  return PI * r * r;
}


int main() {
  double r;
  cout << "What is the radius of your circle? > ";
  cin >> r;
  cout << "The area is: " << get_area(r) << endl;
  return 0;
}
