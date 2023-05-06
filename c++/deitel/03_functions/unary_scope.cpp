#include <iomanip>
#include <iostream>
using namespace std;


const double PI = 3.14159265358979;


int main() {
  const float PI = static_cast<float>(::PI);
  cout << setprecision(20)
       << "Local float value of PI  : " << PI
       << "\nGlobal double value of PI: " << ::PI << endl;
  return 0;
}
