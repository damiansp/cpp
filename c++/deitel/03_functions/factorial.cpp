#include <iomanip>
#include <iostream>

using namespace std;


unsigned long factorial(unsigned long);


int main() {
  for (int i = 0; i <= 10; i++) {
    cout << setw(2) << i << "! = " << factorial(i) << endl;
  }

  return 0;
}


unsigned long factorial(unsigned long n) {
  if (n <= 1) { return 1; }
  else { return n * factorial(n - 1); }
}
