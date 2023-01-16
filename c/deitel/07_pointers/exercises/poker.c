#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FACE 13
#define N_SUITS 4
#define N_CARDS MAX_FACE * N_SUITS


struct playing_card {
  int face;
  int suit;
};


struct deck_of_cards {
  struct playing_card cards[N_CARDS];
  int next_card;
};


enum outcomes{
  HIGH_CARD, PAIR, TWO_PAIRS, THREE_OF_A_KIND, STRAIGHT, FLUSH, FULL_HOUSE,
  FOUR_OF_A_KIND, STRAIGHT_FLUSH};


struct outcome {
  int best_hand;
  int high_card;
};
  


void shuffle(struct deck_of_cards* deck);
struct playing_card digit_to_card(int n);
void print_card(struct playing_card* card);
void print_deck(struct deck_of_cards* deck);
struct playing_card deal_card(struct deck_of_cards* deck);
void deal_hand(
  struct deck_of_cards* deck, struct playing_card hand[], int n_cards);
void print_hand(struct playing_card hand[], int n_cards);
struct outcome get_best_hand(struct playing_card hand[], int n_cards);


const char *FACES[MAX_FACE + 1] = {
  "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
const char *SUITS[N_SUITS] = {"♥", "♦", "♣", "♠"};
const char *OUTCOMES[9] = {
  "High Card", "Pair", "Two Pairs", "Three of a Kind", "Straight", "Flush",
  "Full House", "Four of a Kind", "Straight Flush"};


int main(void) {
  struct deck_of_cards deck;
  const int n_cards = 5;
  struct playing_card hand1[n_cards];
  struct playing_card hand2[n_cards];

  srand(time(NULL)); // seed randgen

  shuffle(&deck);
  //print_deck(&deck);
  deal_hand(&deck, hand1, n_cards);
  printf("Player 1's hand:\n");
  print_hand(hand1, n_cards);
  get_best_hand(hand1, n_cards);
  deal_hand(&deck, hand2, n_cards);
  printf("\n\nPlayer 2's hand:\n");
  print_hand(hand2, n_cards);
  get_best_hand(hand2, n_cards);
  return 0;
}


void shuffle(struct deck_of_cards* deck) {
  int cards[N_CARDS];
  int i, j;
  void swap(int* a, int* b);

  // populate cards
  for (i = 0; i < N_CARDS; i++) {
    cards[i] = i;
  }
  // shuffle cards
  for (i = 0; i < N_CARDS; i++) {
    j = rand() % N_CARDS;
    swap(&cards[i], &cards[j]);
  }
  deck->next_card = N_CARDS - 1;  
  for (i = 0; i < N_CARDS; i++) {
    j = cards[i];
    deck->cards[i] = digit_to_card(j);
  }
}


void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}


struct playing_card digit_to_card(int n) {
  int face = n % MAX_FACE;
  int suit = n % N_SUITS;
  struct playing_card card = {face, suit};
  return card;
}


void print_card(struct playing_card* card) {
  printf("%s%s\n", FACES[card->face], SUITS[card->suit]);
}


void print_deck(struct deck_of_cards* deck) {
  for (int c = 0; c < N_CARDS; c++) {
    print_card(&deck->cards[c]);
  }
}


struct playing_card deal_card(struct deck_of_cards* deck) {
  return deck->cards[deck->next_card--];
}


void deal_hand(
    struct deck_of_cards *deck, struct playing_card hand[], int n_cards) {
  for (int i = 0; i < n_cards; i++) {
    //hand[i] = deck->cards[deck->next_card--];
    hand[i] = deal_card(deck);
    if (deck->next_card < 0) {
      shuffle(deck);
    }
  }
}


void print_hand(struct playing_card hand[], int n_cards) {
  for (int card = 0; card < n_cards; card++) {
    print_card(&hand[card]);
  }
  printf("\n");
}


struct outcome get_best_hand(struct playing_card hand[], int n_cards) {
  int get_high_card(struct playing_card hand[], int n_cards);
  void print_best_hand(struct outcome best_hand);
  struct outcome check_for_n_of_a_kind(struct playing_card hand[], int n_cards);
  /*
  void check_for_flush(struct playing_card hand[], int n_cards);
  void check_for_straight(struct playing_card hand[], int n_cards);  */
  struct outcome best_hand = {HIGH_CARD, get_high_card(hand, n_cards)};
  struct outcome n_of_a_kind;

  n_of_a_kind = check_for_n_of_a_kind(hand, n_cards);
  if (n_of_a_kind.best_hand > best_hand.best_hand) {
    best_hand = n_of_a_kind;
  }
  
  print_best_hand(best_hand);
  /*
  check_for_flush(hand, n_cards);
  check_for_straight(hand, n_cards); */
  return best_hand;
}


int get_high_card(struct playing_card hand[], int n_cards) {
  int high_card = 1;
  for (int card = 0; card < n_cards; card++) {
    if (hand[card].face == 0) {
      high_card = MAX_FACE;
      break;
    }
    if (hand[card].face > high_card) {
      high_card = hand[card].face;
    }
  }
  return high_card;
}


void print_best_hand(struct outcome best_hand) {
  printf(
    "Best hand is: %s with %s high\n",
    OUTCOMES[best_hand.best_hand],
    FACES[best_hand.high_card]);
}


/* checks for 2, 3, or 4 of a kind, or full house */
struct outcome check_for_n_of_a_kind(struct playing_card hand[], int n_cards) {
  int best_hand = HIGH_CARD;
  int high_card = 1;
  int matches[MAX_FACE + 1] = {0};
  int pairs = -1;
  int triples = -1;
  int quads = -1;
  struct outcome result; 
  
  for (int card = 0; card < n_cards; card++) {
    matches[hand[card].face]++;
    if (hand[card].face == 0) {
      matches[13]++;
    }
  }
  for (int face = 0; face < MAX_FACE; face++) {
    if (matches[face] == 2) {
      if (best_hand == HIGH_CARD) {
        best_hand = PAIR;
        high_card = face;
      } else if (best_hand == PAIR) {
        best_hand = TWO_PAIRS;
        high_card = face;
        break;
      } else if (best_hand == THREE_OF_A_KIND) {
        best_hand = FULL_HOUSE;
      }
    } else if (matches[face] == 3) {
      if (best_hand == HIGH_CARD) {
        best_hand = THREE_OF_A_KIND;
        high_card = face;
      } else if (best_hand == PAIR) {
        best_hand = FULL_HOUSE;
        high_card = face;
        break;
      }
    } else if (matches[face] == 4) {
      best_hand = FOUR_OF_A_KIND;
      high_card = face;
      break;
    }
  }
  result.best_hand = best_hand;
  result.high_card = high_card;
  return result;
}


void check_for_flush(struct playing_card hand[], int n_cards) {
  int matches[N_SUITS] = {0};
  const int MIN_FOR_FLUSH = 5;

  for (int card = 0; card < n_cards; card++) {
    matches[hand[card].suit]++;
  }
  for (int suit = 0; suit < N_SUITS; suit++) {
    if (matches[suit] >= MIN_FOR_FLUSH) {
      printf("Hand has a flush of %s\n", SUITS[suit]);
    }
  }
}


void check_for_straight(struct playing_card hand[], int n_cards) {
  int matches[MAX_FACE + 1] = {0};
  int n_consecutive = 0;
  const int MIN_FOR_STRAIGHT = 5;

  for (int card = 0; card < n_cards; card++) {
    matches[hand[card].face]++;
    if (hand[card].face == 0) {    // if Ace
      matches[MAX_FACE]++;  // count as high card (as well as low)
    }
  }
  for (int face = 0; face < MAX_FACE; face++) {
    if (matches[face] > 0) {
      n_consecutive++;
      if (n_consecutive >= MIN_FOR_STRAIGHT) {
        printf("Hand has a straight");
        return;
      }
    } else {
      n_consecutive = 0;
    }
  }
}
