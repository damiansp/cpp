#include <iostream>
#include "maximum.h"
using namespace std;


int main() {
  int i1, i2, i3;
  double d1, d2, d3;
  char c1, c2, c3;
  
  cout << "Input 3 ints: ";
  cin >> i1 >> i2 >> i3;
  cout << "\nThe max is " << max(i1, i2, i3) << endl;
  cout << "Input 3 doubles: ";
  cin >> d1 >> d2 >> d3;
  cout << "\nThe max is " << max(d1, d2, d3) << endl;
  cout << "Input 3 characters: ";
  cin >> c1 >> c2 >> c3;
  cout << "\nThe max is " << max(c1, c2, c3) << endl;
}
