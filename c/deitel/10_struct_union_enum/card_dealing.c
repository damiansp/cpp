#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDS 52
#define N_FACES 13


struct card {
  const char* face;
  const char* suit;
};

typedef struct card Card;


void fill_deck(Card* const deck, const char* face[], const char* suit[]);
void shuffle(Card* const deck);
void deal(const Card* const deck);


int main() {
  Card deck[N_CARDS];
  const char* face[] = {
    "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Jack", "Queen", "King"};
  const char* suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

  srand(time(NULL));

  fill_deck(deck, face, suit);
  shuffle(deck);
  deal(deck);

  return 0;
}


void fill_deck(Card* const deck, const char* face[], const char* suit[]) {
  for (size_t i = 0; i < N_CARDS; ++i) {
    deck[i].face = face[i % N_FACES];
    deck[i].suit = suit[i / N_FACES];
  }
}


void shuffle(Card* const deck) {
  for (size_t i = 0; i < N_CARDS; ++i) {
    size_t j = rand() % N_CARDS;
    Card temp = deck[i];

    deck[i] = deck[j];
    deck[j] = temp;
  }
}


void deal(const Card* const deck) {
  for (size_t i = 0; i < N_CARDS; ++i) {
    printf(
      "%5s of %-8s%s", deck[i].face, deck[i].suit, (i + 1) % 4 ? "  " : "\n");
  }
}
