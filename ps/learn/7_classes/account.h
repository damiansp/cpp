#include <string>
#include <vector>
#include "Transaction.h"


class Account {
private:
  int balance;
  std::vector<Transaction> log;

public:
  Account(); // constructor

  std::vector<std::string> Report();

  bool Deposit(int amount);

  bool Withdraw(int amount);

  int GetBalance() { return balance; }
}; // <- !
