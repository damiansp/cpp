#include <iostream>
using namespace std;


long long fib(int n) {
  long long out = 1;
  long long prev = 1;
  if (n < 3) {
    return 1;
  }
  for (int i = 3; i <= n; i++) {
    long long tmp = out + prev;
    prev = out;
    out = tmp;
  }
  return out;
}



int main() {
  long long val;
  // run to crash to see biggest achievable
  for (int i = 1; i > 0; i++) {
    val = fib(i);
    cout << "fib(" << i << ") = " << val << endl;
    if (val < 0) {
      cout << "Numerical overflow reached." << endl;
      break;
    }
  }
  return 0;
}
