#include <iostream>
using namespace std;


int square(int x) {
  return x * x;
}


double square(double x) {
  return x * x;
}


int main() {
  cout << "sq(7): " << square(7) << endl;
  cout << "sq(7.7): " << square(7.7) << endl;
}
