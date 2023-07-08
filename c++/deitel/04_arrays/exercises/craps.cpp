#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;


const int N_GAMES = 1000000;
enum Status {CONTINUE, WON, LOST};


int roll_dice();
int roll_die();
void update_status(int sum, int* point, Status* game_status);


int main() {
  Status game_status;
  int sum, point;
  int n_turns = 1;
  int n_won[22] = {0};
  int n_lost[22] = {0};
  int total_won = 0;
  int i;

  srand(time(0));
  cout << "Simulating " << N_GAMES << " games..." << endl;
  for (int game = 1; game < N_GAMES; game++) {
    sum = roll_dice();
    update_status(sum, &point, &game_status);
    while (game_status == CONTINUE) {
      n_turns++;
      sum = roll_dice();
      if (sum == point) { game_status = WON; }
      else if (sum == 7) { game_status = LOST; }
    }
    if (game_status == WON) {
      if (n_turns <= 20) {
        n_won[n_turns]++;
      } else {
        n_won[21]++;
      }
      total_won++;
    } else {
      if (n_turns <= 20) {
        n_lost[n_turns]++;
      } else {
        n_lost[21]++;
      }
    }
    n_turns = 1;
  }
  cout << "Turns      N Won    N Lost    % Won" << endl;
  for (i = 1; i < 21; i++) {
    cout << setw(6) << i << "    " << setw(6) << n_won[i] << "    "
         << setw(6) << n_lost[i] << "    " << setw(5) << setprecision(2)
         << static_cast<double>(n_won[i]) / (n_won[i] + n_lost[i]) << endl;
  }
  cout << "\nWon: " << static_cast<double>(total_won) / N_GAMES << endl;
  return 0;
}


int roll_dice() {
  int die1 = roll_die(),
    die2 = roll_die(),
    sum = die1 + die2;
  
  //cout << "You rolled a " << die1 << " and a " << die2 << " for " << sum
  //     << endl;
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
      //cout << "Point is " << *point << endl;
      break;
  }
}
