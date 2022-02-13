#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  double principal{1000.0};
  double rate{0.05};
  
  cout << fixed << setprecision(2);
  cout << "Initial principal: " << principal << endl;
  cout << "    Interest rate: " << rate << endl;
  cout << "\nYear" << setw(20) << "Amount on Deposit" << endl;
  for (int year{1}; year <= 10; ++year) {
    double amount = principal * pow(1.0 + rate, year);
    cout << setw(4) << year << setw(20) << amount << endl;
  }
}
