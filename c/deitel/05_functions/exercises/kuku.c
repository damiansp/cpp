#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 9;


int rand_int() { return rand() % MAX + 1; }


int play_round() {
  int a = rand_int();
  int b = rand_int();
  int prod = a * b;
  int answer = 0;

  while (answer >= 0 & answer != prod) {
    printf("%d x %d = ? (-1 to exit): ", a, b);
    scanf(" %d", &answer);
    if (answer == -1) { return -1; }
    if (answer == prod) {
      printf("Correct!\n");
      return answer;}
    else { printf("No. Try again\n"); }
  }
  return 1;
}


int main() {
  srand(time(NULL));
  while (play_round() != -1) { ; }
  printf("Game over.\n");
  return 0;
}


