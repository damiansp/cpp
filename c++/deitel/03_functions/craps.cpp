#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

enum Status {CONTINUE, WON, LOST};

int roll_dice();
int roll_die();
void update_status(int sum, int* point, Status* game_status);


int main() {
  Status game_status;
  int sum, point;

  srand(time(0));
  sum = roll_dice();
  update_status(sum, &point, &game_status);
  while (game_status == CONTINUE) {
    sum = roll_dice();
    if (sum == point) { game_status = WON; }
    else if (sum == 7) { game_status = LOST; }
  }
  if (game_status == WON) { cout << "You win!" << endl; }
  else { cout << "You lose!" << endl; }

  return 0;
}


int roll_dice() {
  int die1 = roll_die(),
    die2 = roll_die(),
    sum = die1 + die2;
  
  cout << "You rolled a " << die1 << " and a " << die2 << " for " << sum
       << endl;
  return sum;
}


inline int roll_die() { return rand()%6 + 1; }


void update_status(int sum, int* point, Status* game_status) {
  switch (sum) {
    case 7:
    case 11:
      *game_status = WON; break;
    case 2:
    case 3:
    case 12:
      *game_status = LOST; break;
    default:
      *game_status = CONTINUE;
      *point = sum;
      cout << "Point is " << *point << endl;
      break;
  }
}
