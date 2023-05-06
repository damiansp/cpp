#include <iostream>
using namespace std;


template <class T>
T max(T x, T y, T z) {
  T mx = x;
  if (y > mx) { mx = y; }
  if (z > mx) { mx = z; }
  return mx;
}


int main() {
  char a, b, c;
  double d, e, f;
  int i, j, k;

  cout << "Input 3 ints: ";
  cin >> i >> j >> k;
  cout << "max is " << max(i, j, k) << endl;

  cout << "Input 3 doubles: ";
  cin >> d >> e >> f;
  cout << "max is " << max(d, e, f) << endl;

  cout << "Input 3 chars: ";
  cin >> a >> b >> c;
  cout << "max is " << max(a, b, c) << endl;

  return 0;
}
