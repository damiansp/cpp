#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;


const int N_SUITS = 4;
const int N_FACES = 13;


void shuffle(int[][N_FACES]);
void deal(const int[][N_FACES], const char* [], const char* []);


int main() {
  const char* suits[N_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  const char* faces[N_FACES] = {
    "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen",
    "King"};
  int deck[N_SUITS][N_FACES] = {0};
  srand(time(0));

  shuffle(deck);
  deal(deck, faces, suits);
  cout << endl;
  return 0;
}


void shuffle(int deck[][N_FACES]) {
  int i, j;

  for (int card = 1; card <= N_SUITS * N_FACES; card++) {
    do {
      i = rand() % N_SUITS;
      j = rand() % N_FACES;
    } while(deck[i][j] != 0);
    deck[i][j] = card;
  }
}


void deal(const int deck[][N_FACES], const char* faces[], const char* suits[])
{
  for (int card = 1; card <= N_SUITS * N_FACES; card++) {
    for (int i = 0; i < N_SUITS; i++) {
      for (int j = 0; j < N_FACES; j++) {
        if (deck[i][j] == card) {
          cout << setw(5) << right << faces[j] << " of "
               << setw(8) << left << suits[i] << (card % 3 == 0 ? '\n' : '\t');
        }
      }
    }
  }
}
