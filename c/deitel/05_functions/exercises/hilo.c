#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randn(int maxn) {
  return rand() % maxn + 1;
}


int main() {
  srand(time(NULL));
  const int maxn = 1000;
  int n = randn(maxn);
  int guess;
  int tries;

  printf("Try to guess the number between 1 and 1000: ");
  for (tries = 10; tries > 0; tries--) {
    scanf("%d", &guess);
    if (guess == n) {
      printf("You got it! You must know the secret.\n");
      return 0;
    } else if (guess > n) {
      printf("lower\n");
    } else { printf("higher\n"); }
  }
  printf("You should have been able to guess in 10 tries.  Better lunck next time!\n");
  return 0;
}
