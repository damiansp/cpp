#include <cmath>
#include <iostream>
using namespace std;


double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
  double x0 = 0.,
    y0 = 0.,
    x1 = 1.,
    y1 = 1.,
    x2 = 3.,
    y2 = 4.;
  cout << "dist((1, 1), (0, 0)): " << distance(x1, y1, x0, y0) << endl;
  cout << "dist((3, 4), (0, 0)): " << distance(x2, y2, x0, y0) << endl;
  cout << "dist((1, 1), (3, 4)): " << distance(x1, y1, x2, y2) << endl;
  return 0;
}
