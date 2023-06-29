#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;


const int DIE_SIDES = 6;
const int N_TRIALS = 1000;


int roll_die() {
  return rand() % DIE_SIDES + 1;
}

void print_combinations(int combinations[DIE_SIDES][DIE_SIDES]) {
  cout << "\nIndividual rolls:\n";
  for (int d1 = 0; d1 < DIE_SIDES; d1++) {
    for (int d2 = 0; d2 < DIE_SIDES; d2++) {
      cout << setw(3) << combinations[d1][d2] << " ";
    }
    cout << endl;
  }
}


void print_sums(int sums[DIE_SIDES + DIE_SIDES + 1]) {
  cout << "\nSums:\n";
  for (int i = 1; i <= DIE_SIDES + DIE_SIDES; i++) {
    cout << setw(2) << i << ": " << sums[i] << endl;
  }
}


int main() {
  int combinations[DIE_SIDES][DIE_SIDES] = {0};
  int sums[DIE_SIDES + DIE_SIDES + 1];  // e.g., [0, ..., 12]
  srand(time(0));

  for (int trial = 0; trial < N_TRIALS; trial++) {
    int die1 = roll_die();
    int die2 = roll_die();
    combinations[die1 - 1][die2 - 1]++;
    sums[die1 + die2]++;
  }
  print_combinations(combinations);
  print_sums(sums);
  return 0;
}
