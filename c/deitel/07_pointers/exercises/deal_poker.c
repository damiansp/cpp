#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FACE 13
#define N_SUITS 4
#define N_CARDS MAX_FACE * N_SUITS


const char *suits[N_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char *faces[MAX_FACE] = {
  "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
  "Ten", "Jack", "Queen", "King"};


void shuffle(int deck[][MAX_FACE]);
void deal_hand(int deck[N_SUITS][MAX_FACE], int hand[][2], int n_cards);
void print_hand(int hand[][2], int n_cards);
void examine_hand(int hand[][2], int n_cards);


int main(void) {
  int deck[N_SUITS][MAX_FACE] = {0};
  const int n_cards = 5;
  int hand[n_cards][2] = {0};

  srand(time(0)); // seed randgen

  shuffle(deck);
  deal_hand(deck, hand, n_cards);
  print_hand(hand, n_cards);
  examine_hand(hand, n_cards);
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


void deal_hand(int deck[N_SUITS][MAX_FACE], int hand[][2], int n_cards) {
  int card;
  int suit;
  int face;

  for (card = 1; card <= n_cards; card++) {
    for (suit = 0; suit < N_SUITS; suit++) {
      for (face = 0; face < MAX_FACE; face++) {
        if (deck[suit][face] == card) {
          hand[card][0] = face;
          hand[card][1] = suit;
        }
      }
    }
  }
}


void print_hand(int hand[][2], int n_cards) {
  for (int card = 0; card < n_cards; card++) {
    printf("The %s of %s\n", faces[hand[card][0]], suits[hand[card][1]]);
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
