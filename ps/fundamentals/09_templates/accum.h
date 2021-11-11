#pragma once


template <class T>
class Accum {
  private:
    T total;

  public:
    Accum(T start): total(start) {};
    T operator+=(T const& t) { return total += t; }
    T getTotal() const { return total; }
};
