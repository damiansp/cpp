#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
  int passes = 0,
    fails = 0,
    counter = 1,
    result;

  while (counter <= 10) {
    cout << "Enter result (1: pass; 2: fail) > ";
    cin >> result;
    if (result == 1) { passes++; }
    else { fails++; }
    counter++;
  }
  cout << "Passed: " << passes << endl;
  cout << "Failed: " << fails << endl;
  if ( passes > 8) { cout << "Commendable teaching, there!" << endl; }
  return 0;
}
