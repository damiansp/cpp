#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITERS 100


int flip() {
  return rand() % 2;
}


int main() {
  int res;
  int heads = 0, tails = 0;
  
  srand(time(NULL));
  for (int i = 0; i < ITERS; i++) {
    res = flip();
    printf("%s ", res == 1 ? "heads" : "tails");
    res == 0 ? tails++ : heads++;
  }
  printf("\nTotal heads: %d\ttails: %d\n", heads, tails);
  return 0;
}
