#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum GameStatus {CONTINUE, WON, LOST};


int roll_dice(void);
int roll_die(void);
enum GameStatus determine_initial_game_status(int roll);
enum GameStatus determine_game_status(int roll, int point);


int main(void) {
  int roll;
  int point;
  enum GameStatus game_status;

  srand(time(NULL)); //seed randgen w current time
  point = roll_dice();
  game_status = determine_initial_game_status(point);
  while (game_status == CONTINUE) {
    roll = roll_dice();
    game_status = determine_game_status(roll, point);
  }

  return 0;
}


int roll_dice(void) {
  int die1 = roll_die();
  int die2 = roll_die();
  int roll = die1 + die2;
  printf("  Rolled %d + %d for %d\n", die1, die2, roll);
  return roll; 
}


int roll_die(void) { return rand() % 6 + 1; }


enum GameStatus determine_initial_game_status(int roll) {
  enum GameStatus status;
  switch (roll) {
    case 7:
    case 11:
      printf("You win!\n");
      status = WON; break;
    case 2:
    case 3:
    case 12:
      printf("You lose!\n");
      status = LOST; break;
    default:
      printf("Point is %d\n", roll);
      status = CONTINUE; break;
  }
  return status;
}


enum GameStatus determine_game_status(int roll, int point) {
  if (roll == point) {
    printf("You win!\n");
    return WON;
  }
  if (roll == 7) {
    printf("You lose!\n");
    return LOST;
  }
  printf("Roll again...\n");
  return CONTINUE;
}
