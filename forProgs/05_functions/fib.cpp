#include <iostream>
using namespace std;


long fibonacci(long n) {
  if ((n == 0) || (n == 1)) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
  for (int i{0}; i <= 10; ++i) {
    cout << "fib(" << i << ") = " << fibonacci(i) << endl;
  }

  for (int i{20}; i <= 35; i += 5) {
    cout << "fib(" << i << ") = " << fibonacci(i) << endl;
  }
}
