#include <iostream>
using std::cout;

#include "Account.h"


int main() {
  Account a;
  a.Deposit(90);
  cout << "After depositing $90, balance: " << a.GetBalance() << '\n';
  for (auto s: a.Report()) cout << s << '\n';
  a.Withdraw(50);
  if (a.Withdraw(100)) cout << "second withdraw succeeded\n";
  cout << "After withdrawing %50, then $100\n";
  for (auto s: a.Report()) cout << s << '\n';
  return 0;
}
