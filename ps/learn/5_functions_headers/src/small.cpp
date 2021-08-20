#include <iostream>
using std::cout;

#include "Functions.h"


int main() {
  int total = add(3, 4);
  cout << "3 + 4 = " << total;

  double another = add(1.2, 3.4);
  cout << "\n1.2 + 3.4 = " << another << "\n";

  auto sum3 = add(1.1, 2.2, 3.3);
  cout << "1.1 + 2.2 + 3.3 = " << sum3 << '\n';

  if (test(true)) cout << "true passes\n";
  
  return 0;
}
