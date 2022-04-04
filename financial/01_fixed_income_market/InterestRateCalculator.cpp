#include "InterestRateCalculator.h"


InterestRateCalculator::InterestRateCalculator(double rate): m_rate(rate) {}

InterestRateCalculator::~InterestRateCalculator() {}

InterestRateCalculator::InterestRateCalculator(const InterestRateCalculator &v):
  m_rate(v.m_rate) {}

InterestRateCalculator &InterestRateCalculator::operator=(
    const InterestRateCalculator &v) {
  if (&v != this) {
    this->m_rate = v.m_rate;
  }
  return *this;
}
