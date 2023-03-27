#include <stdio.h>

#define N_CARDS 52


struct bit_card {
  unsigned int face: 4; // 4 bits (0-15)
  unsigned int suit: 2; //        (0-3)
  unsigned int color: 1; //       (0-1)
};

typedef struct bit_card Card;


void fill_deck(Card* const deck);
void deal(const Card* const desk);


int main() {
  Card deck[N_CARDS];

  fill_deck(deck);
  puts("Card values  0-12 -> A, 2, ..., K");
  puts("Suit values  0-3  -> H, D, C, S");
  puts("Color values 0-1  -> R, B\n");
  deal(deck);
  return 0;
}


void fill_deck(Card* const deck) {
  for (size_t i = 0; i < N_CARDS; ++i) {
    deck[i].face = i % (N_CARDS / 4);
    deck[i].suit = i / (N_CARDS / 4);
    deck[i].color = i / (N_CARDS / 2);
  }
}


void deal(const Card* const deck) {
  printf(
    "%-6s%-6s%-15s%-6s%-6s%s\n", "Card", "Suit", "Color", "Card", "Suit", "Color"
  );
  for (size_t i = 0, j = i + 26; i < N_CARDS / 2; ++i, ++j) {
    printf("%6d%6d%6d", deck[i].face, deck[i].suit, deck[i].color);
    printf("%15d%6d%6d\n", deck[j].face, deck[j].suit, deck[j].color);
  }
}
