#include <iostream>
using namespace std;


template <class T>
T min(T x, T y, T z) {
  T mn = x;
  if (y < mn) { mn = y; }
  if (z < mn) { mn = z; }
  return mn;
}


int main() {
  char a, b, c;
  double d, e, f;
  int i, j, k;

  cout << "Input 3 ints: ";
  cin >> i >> j >> k;
  cout << "min is " << min(i, j, k) << endl;

  cout << "Input 3 doubles: ";
  cin >> d >> e >> f;
  cout << "min is " << min(d, e, f) << endl;

  cout << "Input 3 chars: ";
  cin >> a >> b >> c;
  cout << "min is " << min(a, b, c) << endl;

  return 0;
}
