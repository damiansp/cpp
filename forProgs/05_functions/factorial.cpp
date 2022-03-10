#include <iomanip>
#include <iostream>
using namespace std;


long factorial(long n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}


int main() {
  for (int i{0}; i <= 10; ++i) {
    cout << setw(2) << i << "! = " << factorial(i) << endl;
  }
}
