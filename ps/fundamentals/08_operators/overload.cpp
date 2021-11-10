#include <iostream>
using namespace std;

#include "Person.h"


int main() {
  Person p1("Bob", "Dobolina", 45);
  Person p2("Justin", "Case", 29);

  cout << "p1 is ";
  if (!(p1 < p2)) {
    cout << "not ";
  }
  cout << "less than p2" << endl;

  cout << "p1 is ";
  if (!(p1 < 300)) {
    cout << "not ";
  }
  cout << "less than 300" << endl;

  cout << "300 is ";
  if (!(300 < p1)) {
    cout << "not ";
  }
  cout << "less than p1" << endl;

  return 0;
}
