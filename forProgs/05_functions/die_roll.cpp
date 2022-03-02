#include <ctime>
#include <iostream>
#include <iomanip>
#include <random>
#include "gsl/gsl"


int main() {
  default_random_engine engine{gsl::narrow_cast<unsigned int>(time(0))};
  const uniform_int_distribution<int> rand_int{1, 6};

  for (int i{0}; i < 10; ++i) {
    cout << setw(10) << rand_int(engine)
  }
  cout << endl;
  
  return 0;
}
