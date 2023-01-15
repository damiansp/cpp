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


void shuffle(struct deck_of_cards* deck);
struct playing_card digit_to_card(int n);
void print_card(struct playing_card* card);
void print_deck(struct deck_of_cards* deck);
void deal_hand(
  struct deck_of_cards* deck, struct playing_card hand[], int n_cards);
void print_hand(struct playing_card hand[], int n_cards);
void examine_hand(int hand[][2], int n_cards);


const char *faces[MAX_FACE] = {
  "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
  "Ten", "Jack", "Queen", "King"};
const char *suits[N_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};


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
  //examine_hand(hand1, n_cards);
  deal_hand(&deck, hand2, n_cards);
  printf("\n\nPlayer 2's hand:\n");
  print_hand(hand2, n_cards);
  //examine_hand(hand2, n_cards);
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
  printf("%s of %s\n", faces[card->face], suits[card->suit]);
}


void print_deck(struct deck_of_cards* deck) {
  for (int c = 0; c < N_CARDS; c++) {
    print_card(&deck->cards[c]);
  }
}


void deal_hand(
    struct deck_of_cards *deck, struct playing_card hand[], int n_cards) {
  for (int i = 0; i < n_cards; i++) {
    hand[i] = deck->cards[deck->next_card--];
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


void examine_hand(int hand[][2], int n_cards) {
  void check_for_n_of_a_kind(int hand[][2], int n_cards);
  void check_for_flush(int hand[][2], int n_cards);
  void check_for_straight(int hand[][2], int n_cards);  
  
  check_for_n_of_a_kind(hand, n_cards);
  check_for_flush(hand, n_cards);
  check_for_straight(hand, n_cards);
}


/* checks for 2, 3, or 4 of a kind */
void check_for_n_of_a_kind(int hand[][2], int n_cards) {
  int matches[MAX_FACE] = {0};

  for (int card = 0; card < n_cards; card++) {
    matches[hand[card][0]]++;
  }
  for (int face = 0; face < MAX_FACE; face++) {
    if (matches[face] > 1) {
      printf("Hand has %d %ss\n", matches[face], faces[face]);
    }
  }
}


void check_for_flush(int hand[][2], int n_cards) {
  int matches[N_SUITS] = {0};
  const int min_for_flush = 5;

  for (int card = 0; card < n_cards; card++) {
    matches[hand[card][1]]++;
  }
  for (int suit = 0; suit < N_SUITS; suit++) {
    if (matches[suit] >= min_for_flush) {
      printf("Hand has a flush of %s\n", suits[suit]);
    }
  }
}


void check_for_straight(int hand[][2], int n_cards) {
  int matches[MAX_FACE + 1] = {0};
  int n_consecutive = 0;
  const int min_for_straight = 5;

  for (int card = 0; card < n_cards; card++) {
    matches[hand[card][0]]++;
    if (hand[card][0] == 0) {    // if Ace
      matches[MAX_FACE]++;  // count as high card (as well as low)
    }
  }
  for (int face = 0; face < MAX_FACE; face++) {
    if (matches[face] > 0) {
      n_consecutive++;
      if (n_consecutive >= min_for_straight) {
        printf("Hand has a straight");
        return;
      }
    } else {
      n_consecutive = 0;
    }
  }
}
