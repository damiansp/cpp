#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 9


int rand_int(int max) { return rand() % max + 1; }


void print_correct() {
  char str[4][11] = {"Very good", "Excellent", "Nice job", "Keep it up"};
  printf("%s!\n", str[rand_int(4) - 1]);
}


void print_incorrect() {
  char str[4][27] = {
    "No, try again.", "Wrong, give it another go.", "Don't give up!", "Keep trying."
  };
  printf("%s\n", str[rand_int(4) - 1]);
}


int play_round() {
  int a = rand_int(MAX);
  int b = rand_int(MAX);
  int prod = a * b;
  int answer = 0;

  while (answer >= 0 & answer != prod) {
    printf("%d x %d = ? (-1 to exit): ", a, b);
    scanf(" %d", &answer);
    if (answer == -1) { return -1; }
    if (answer == prod) {
      print_correct();
      return answer;}
    else {
      print_incorrect();
      return 0;
    }
  }
  return answer;
}


int main() {
  int n_wrong = 0;
  int answer;
  srand(time(NULL));
  
  for (int n_remaining = 10; n_remaining > 0; n_remaining--) {
    answer = play_round();
    if (answer == 0) { n_wrong++; }
    if (answer == -1) {
      printf("Try again later!\n");
      return 0;
    }
  }
  if (n_wrong >= 3) { printf("Please see your teacher for extra help.\n"); }
  printf("Game over.\n");
  return 0;
}


