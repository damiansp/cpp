#include <iomanip>
#include <iostream>
using namespace std;


unsigned long factorial(int n) {
  unsigned long res{1};
  for (int i{n}; i > 1; --i) {
    res *= i;
  }
  return res;
}


int main() {
  for (int i{0}; i <= 10; ++i) {
    cout << setw(2) << i << "! = " << factorial(i) << endl;
  }
}
