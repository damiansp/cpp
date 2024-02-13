#include <iomanip>
#include <iostream>
using namespace std;

#include "savings.h"


double SavingsAccount::annual_interest_rate = 0.03;


SavingsAccount::SavingsAccount(double init_balance) {
  balance = init_balance;
  cout << "Initialize account with $" << fixed << showpoint << setprecision(2)
       << balance << endl;
}


void SavingsAccount::modify_interest_rate(double new_rate) {
  annual_interest_rate = new_rate;
  cout << "Interest rate updated to " << fixed << showpoint << setprecision(2)
       << annual_interest_rate << endl;
}


void SavingsAccount::get_monthly_interest() {
  double interest = (annual_interest_rate / 12) * balance;
  balance += interest;
  cout << "Received interest amount: $" << fixed << showpoint
       << setprecision(2) << interest << endl;
  cout << "New balance: $" << balance << endl;
}
