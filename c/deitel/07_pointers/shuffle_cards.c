#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FACE 13
#define N_SUITS 4
#define N_CARDS MAX_FACE * N_SUITS


void shuffle(int deck[][MAX_FACE]);
void deal(const int deck[][MAX_FACE], const char *face[], const char *suit[]);


int main(void) {
  const char *suit[N_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  const char *face[MAX_FACE] = {
    "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Jack", "Queen", "King"};
  int deck[N_SUITS][MAX_FACE] = {0};

  srand(time(0)); // seed randgen

  shuffle(deck);
  deal(deck, face, suit);
  return 0;
}


void shuffle(int deck[][MAX_FACE]) {
  int suit;
  int face;
  int card;

  // poor program design: may pick the same index many times
  for (card = 1; card <= N_CARDS; card++) {
    do {
      suit = rand() % N_SUITS;
      face = rand() % MAX_FACE;
    } while (deck[suit][face] != 0);
    deck[suit][face] = card;
  }
}


void deal(const int deck[][MAX_FACE], const char *face[], const char *suit[]) {
  int card;
  int row; // iterate over suits
  int col; // ""      ""   faces

  for (card = 1; card <= N_CARDS; card++) {
    for (row = 0; row < N_SUITS; row++) {
      for (col = 0; col < MAX_FACE; col++) {
        if (deck[row][col] == card) {
          printf(
            "%5s of %-8s%c", face[col], suit[row], card % 2 == 0 ? '\n' : '\t');
        }
      }
    }
  }
}
