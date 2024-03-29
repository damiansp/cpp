#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEPHANT_SEAL_WT_MALE 8800
#define MIN_ELEPHANT_SEAL_WT_MALE 4400
#define RANGE 4400
#define POPULATION 1000
#define WEIGHT_OVER_MIN rand() % RANGE
#define WEIGHT MIN_ELEPHANT_SEAL_WT_MALE + WEIGHT_OVER_MIN
#define FILL for (i = 0; i < POPULATION; i++) data[i] = WEIGHT


void print_data(int d[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d\t", d[i]);
    if ((i + 1) % 10 == 0) { printf("\n"); }
  }
}


int main() {
  int i;
  int data[POPULATION];

  srand(time(0));
  FILL;
  print_data(data, POPULATION);
  printf("\n\n");
  return 0;
}
