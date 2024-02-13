#include <iostream>
using namespace std;

#include "savings.h"


int main() {
  SavingsAccount s1(100.00);
  SavingsAccount s2(100.00);

  for (int month = 0; month < 12; month++) {
    s1.get_monthly_interest();
    s2.get_monthly_interest();
  }

  s1.modify_interest_rate(0.1);
  s2.modify_interest_rate(0.12);  // static so this should override previous

  for (int month = 0; month < 12; month++) {
    s1.get_monthly_interest();
    s2.get_monthly_interest();
  }
  
  return 0;
}


