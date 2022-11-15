#include <stdio.h>

#define N 40
#define FREQ 11


int main(void) {
  int answer, rating;
  int freq[FREQ] = {0};
  int responses[N] = {
    1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8,
    6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

  for (answer = 0; answer < N; answer++) {
    ++freq[responses[answer]];
  }
  printf("%s%17s\n", "Rating", "Frequency");
  for (rating = 1; rating < FREQ; rating++) {
    printf("%6d%17d\n", rating, freq[rating]);
  }
  return 0;
}
