#ifndef __FinancialSamples__InterestRateCalculator__
#define __FinancialSamples__InterestRateCalculator__
#include <iostream>


class InterestRateCalculator {
 public:
  InterestRateCalculator(double rate);
  InterestRateCalculator(const InterestRateCalculator &v);
  InterestRateCalculator &operator = (const InterestRateCalculator &v);
  ~InterestRateCalculator();
  double singlePeriod(double value);

 private:
  double m_rate;
};


inline double InterestRateCalculator::singlePeriod(double value) {
  double f = value * (1 + this->m_rate);
  return f;
}
#endif
