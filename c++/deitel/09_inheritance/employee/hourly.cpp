#include <iomanip>
#include <iostream>
using namespace std;

#include "hourly.h"


HourlyWorker::HourlyWorker(
    const char* first, const char* last, double init_hours, double init_wage
): Employee(first, last) {
  hours = init_hours;
  wage = init_wage;
}


double HourlyWorker::get_pay() const { return wage * hours; }


void HourlyWorker::print() const {
  cout << "HourlyWorker::print() executing...\n\n";
  Employee::print();
  cout << " is an hourly worker with a pay of $"
       << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
       << get_pay() << endl;
}
