#include <iostream>
#include "InterestRateCalculator.h"
using namespace std;


int main(int argc, const char* argv[]) {
  if (argc != 3) {
    cout << "usage: main <interest rate> <value>" << endl;
    return 1;
  }
  double rate = atof(argv[1]);
  double value = atof(argv[2]);
  InterestRateCalculator irCalc(rate);
  double res = irCalc.singlePeriod(value);
  cout << " result: " << res << endl;
  return 0;
}
