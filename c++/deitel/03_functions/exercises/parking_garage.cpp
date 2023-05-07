#include <iomanip>
#include <iostream>
using namespace std;


double get_fee(double hours) {
  double owed = 2.;
  const double HOURLY_RATE = 0.5;
  const double MAX_FEE = 10.;
  if (hours <= 3) { return owed; }
  owed += static_cast<int>(hours - 3) * HOURLY_RATE;
  owed = owed > MAX_FEE ? MAX_FEE : owed;
  return owed;
}


int main() {
  double client_hours[3] = {1.5, 4., 24.};
  double total_hours = 0;
  double total_fees = 0;

  cout << setw(6) << left << "Car " << setw(6) << right << "Hours" << setw(7)
       << right << "Charge" << endl;
  for (int i = 0; i < 3; ++i) {
    double hours = client_hours[i];
    double fee = get_fee(hours);
    total_hours += hours;
    total_fees += fee;
    cout << setw(6) << left << i << setiosflags(ios::fixed | ios::showpoint)
         << setw(6) << setprecision(1) << right <<  hours << setw(7)
         << setprecision(2) << right << fee << endl;
  }
  cout << setw(6) << "TOTAL " << setw(6) << setprecision(1) << total_hours
       << setw(7) << setprecision(2) << total_fees << endl;
  return 0;
}
