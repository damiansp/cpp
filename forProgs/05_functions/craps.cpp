#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "gsl/gsl"
using namespace std;


int roll_dice();


int main() {
  //srand(gsl::narrow_cast<unsigned int>(time(0)));

  enum class Status {KEEP_ROLLING, WON, LOST};
  int my_point{0};
  Status game_status{Status::KEEP_ROLLING};
  
  switch (const int sum_of_dice{roll_dice()}; sum_of_dice) {
    case 7:
    case 11:
      game_status = Status::WON; break;
    case 2:
    case 3:
    case 12:
      game_status = Status::LOST; break;
    default:
      my_point = sum_of_dice;
      cout << "Point is " << my_point << endl; break;
  }
  while(Status::KEEP_ROLLING == game_status) {
    if (const int sum_of_dice{roll_dice()}; sum_of_dice == my_point) {
      game_status = Status::WON;
    } else {
      if (sum_of_dice == 7) {
        game_status = Status::LOST;
      }
    }
  }
  if (Status::WON == game_status) {
    cout << "You win!" << endl;
  } else {
    cout << "You lose!" << endl;
  }

  return 0;
}


int roll_dice() {
  const int d1{1 + rand() % 6};
  const int d2{1 + rand() % 6};
  const int sum{d1 + d2};
  cout << "You rolled a " << d1 << " and a " << d2 << " (" << sum << ")"
       << endl;
  return sum;
}
