#include <stdio.h>


struct Card {
  char* face;
  char* suit;
};


int main() {
  struct Card a_card;

  a_card.face = "Ace";
  a_card.suit = "Spades";

  struct Card* card_ptr = &a_card;

  printf("The %s of %s\n", a_card.face, a_card.suit);
  printf("The %s of %s\n", card_ptr->face, card_ptr->suit);
  printf("The %s of %s\n", (*card_ptr).face, (*card_ptr).suit);

  return 0;
}
