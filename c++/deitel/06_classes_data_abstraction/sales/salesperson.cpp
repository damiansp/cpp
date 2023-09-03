#include <iomanip>
#include <iostream>

#include "salesperson.h"
using namespace std;


Salesperson::Salesperson() {
  for (int month = 0; month < 12; month++) {
    sales[month] = 0.;
  }
}


void Salesperson::get_sales_from_user() {
  double sales_figure;

  for (int month = 1; month <= 12; month++) {
    cout << "Enter sales for month " << month << ": ";
    cin >> sales_figure;
    set_sales(month, sales_figure);
  }
}


void Salesperson::set_sales(int month, double amt) {
  if (month >= 1 && month <= 12 && amt > 0) {
    sales[month - 1] = amt;
  } else {
    cout << "Invalid month or amount" << endl;
  }
}


void Salesperson::print_annual_sales() {
  cout << setprecision(2) << setiosflags(ios::fixed | ios::showpoint)
       << "\nTotal annual sales: $" << total_annual_sales() << endl;
}


double Salesperson::total_annual_sales() {
  double total = 0.;

  for (int month = 0; month < 12; month++) {
    total += sales[month];
  }
  return total;
}
