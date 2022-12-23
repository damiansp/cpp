#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6
#define N_ROLLS 36000


int roll() { return rand() % SIDES + 1; }


void add_roll_stats(int freq[SIDES][SIDES], int sum_freq[2 * SIDES]) {
  int d1 = roll();
  int d2 = roll();
    
  ++freq[d1 - 1][d2 - 1];
  ++sum_freq[d1 + d2 - 2];
}


void print_vector(int v[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%4d ", v[i]);
  }
  printf("\n");
}


void print_matrix(int m[SIDES][SIDES]) {
  for (int i = 0; i < SIDES; i++) {
    print_vector(m[i], SIDES);
  }
}


int main(void) {
  int freq[SIDES][SIDES] = {0};
  int sum_freq[2 * SIDES] = {0};
  int i;
  srand(time(NULL));

  for (i = 0; i < N_ROLLS; i++) {
    add_roll_stats(freq, sum_freq);
  }
  printf("Freq. of all combinations:\n");
  print_matrix(freq);
  printf("\nFreqency of sums:\n");
  print_vector(sum_freq, 2 * SIDES - 1);

  return 0;
}
