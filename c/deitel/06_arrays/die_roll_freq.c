#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6
#define N_ROLLS 6000


int main(void) {
  int face, roll;
  int freq[SIDES + 1] = {0};
  srand(time(NULL));

  for (roll = 1; roll <= N_ROLLS; roll++) {
    face = rand() % SIDES + 1;
    ++freq[face];
  }
  printf("%s%17s\n", "Face", "Frequency");
  for (face = 1; face < SIDES + 1; face++) {
    printf("%4d%17d\n", face, freq[face]);
  }
  
  return 0;
}
