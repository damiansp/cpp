#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_GAMES 1000
#define MAX_ROLL 20


enum GameStatus {CONTINUE, WON, LOST};

struct end_status {
  enum GameStatus status;
  int n_rolls;
};


struct end_status play_game(void);
int roll_dice(void);
int roll_die(void);
enum GameStatus determine_initial_game_status(int roll);
enum GameStatus determine_game_status(int roll, int point);
void summarize_stats(
  int total_wins, int won_after[MAX_ROLL], int lost_after[MAX_ROLL]);


int main(void) {
  int i;
  int total_wins = 0;
  int won_after[MAX_ROLL] = {0};
  int lost_after[MAX_ROLL] = {0};
  struct end_status final_status;

  srand(time(NULL)); //seed randgen w current time

  for (i = 0; i < N_GAMES; i++) {
    final_status = play_game();
    if (final_status.status == WON) {
      total_wins++;
      ++won_after[final_status.n_rolls - 1];
    } else {
      ++lost_after[final_status.n_rolls - 1];
    }
  }
  summarize_stats(total_wins, won_after, lost_after);
  return 0;
}


struct end_status play_game(void) {
  int roll;
  int n_rolls = 0;
  int point;
  enum GameStatus game_status;
  struct end_status final_status;

  point = roll_dice();
  n_rolls++;
  game_status = determine_initial_game_status(point);
  while (game_status == CONTINUE) {
    roll = roll_dice();
    n_rolls++;
    game_status = determine_game_status(roll, point);
  }
  if (n_rolls >= MAX_ROLL) { n_rolls = MAX_ROLL; }
  final_status.status = game_status;
  final_status.n_rolls = n_rolls;
  return final_status;
}


int roll_dice(void) {
  int die1 = roll_die();
  int die2 = roll_die();
  int roll = die1 + die2;
  //printf("  Rolled %d + %d for %d\n", die1, die2, roll);
  return roll; 
}


int roll_die(void) { return rand() % 6 + 1; }


enum GameStatus determine_initial_game_status(int roll) {
  enum GameStatus status;
  switch (roll) {
    case 7:
    case 11:
      //printf("You win!\n");
      status = WON; break;
    case 2:
    case 3:
    case 12:
      //printf("You lose!\n");
      status = LOST; break;
    default:
      //printf("Point is %d\n", roll);
      status = CONTINUE; break;
  }
  return status;
}


enum GameStatus determine_game_status(int roll, int point) {
  if (roll == point) {
    //printf("You win!\n");
    return WON;
  }
  if (roll == 7) {
    //printf("You lose!\n");
    return LOST;
  }
  //printf("Roll again...\n");
  return CONTINUE;
}


void summarize_stats(
    int total_wins, int won_after[MAX_ROLL], int lost_after[MAX_ROLL]) {
  int i;
  
  printf("Won %d games (%.4f)\n", total_wins, (float) total_wins / N_GAMES);
  printf("Wins after n rolls:\n");
  for (i = 0; i < MAX_ROLL; i++) {
    printf(
      "%2d: %4d (%.4f)\n", i + 1, won_after[i], (float) won_after[i] / N_GAMES);
  }
  printf("\nLosses after n rolls:\n");
  for (i = 0; i < MAX_ROLL; i++) {
    printf(
      "%2d: %4d (%.4f)\n",
      i + 1,
      lost_after[i],
      (float) lost_after[i] / N_GAMES);
  }
}
