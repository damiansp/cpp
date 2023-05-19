#include <iostream>
using namespace std;


double min(double a, double b, double c) {
  double mn = a;
  mn = b < mn ? b : mn;
  mn = c < mn ? c : mn;
  return mn;
}


int main() {
  double x, y, z;
  cout << "Enter 3 decimal values: > ";
  cin >> x >> y >> z;
  cout << "The smallest is " << min(x, y, z) << endl;
  return 0;
}
