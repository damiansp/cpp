#include <iostream>
using namespace std;


int main() {
  int pass{0};
  int fail{0};
  int i{1};

  while (i <= 10) {
    cout << "Enter result (1: pass, 2: fail): ";
    int res;
    cin >> res;
    res == 1 ? pass++ : fail++;
    i++;
  }
  cout << "Passed: " << pass << "\nFailed: " << fail << endl;
  if (pass > 8) {
    cout << "Bonus to instructor!" << endl;
  }
  return 0;
}
