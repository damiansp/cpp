#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gsl/gsl"
using namespace std;


int rollDice();


int main() {
  enum class Status {KEEP_ROLLING, WON, LOST};
  int my_point{0};
  Status game_status{Status::KEEP_ROLLING};
  
  srand(gsl::narrow_cast<unsigned int>(time(0)));

  return 0;
}
