#include <iostream>

using namespace std;


unsigned long fib(unsigned long);


int main() {
  unsigned long res, n;

  cout << "Enter an int > ";
  cin >> n;
  res = fib(n);
  cout << "fib(" << n << ") = " << res << endl;

  return 0;
}


unsigned long fib(unsigned long n) {
  if (n == 0 || n == 1) { return n; }
  else { return fib(n - 1) + fib(n - 2); }
}
