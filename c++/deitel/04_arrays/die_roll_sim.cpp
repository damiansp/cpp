#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  const int N_SIDES = 6;
  const int N_ROLLS = N_SIDES * 1000;
  int freq[N_SIDES + 1] = {0};
  srand(time(0));

  for (int roll = 1; roll <= N_ROLLS; roll++) {
    ++freq[rand()%6 + 1];
  }
  cout << "Side" << setw(13) << "Frequency" << endl;
  for (int side = 1; side < N_SIDES + 1; side++) {
    cout << setw(4) << side << setw(13) << freq[side] << endl;
  }
}
