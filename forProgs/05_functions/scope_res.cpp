#include <iostream>
using namespace std;


int n{7};


int main() {
  double n{10.2};
  cout << "main scope, n = " << n;
  cout << "\nglobal scope, n = " << ::n << endl;
}
