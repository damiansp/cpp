#include <iostream>
using namespace std;

#include "bigint.h"


int main() {
  BigInt n1(765321), n2(7891234), n3("999999999999"), n4("1"), n5;

  cout << "n1: " << n1 << "\nn2: " << n2 << "\nn3: " << n3 << "\nn4: " << n4
       << "\nn5: " << n5 << endl;
  n5 = n1 + n2;
  cout << n1 << " + " << n2 << " = " << n5 << endl;
  cout << n3 << " + " <<  n4  << " = " << (n3 + n4) << endl;
  n5 = n1 + 9;
  cout << n1 << " + 9 = " << n5 << endl;
  n5 = n2 + "10000";
  cout << n2 << " + 10,000 = " << n5 << endl;
  return 0;
}
