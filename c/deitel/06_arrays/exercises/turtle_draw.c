#include <stdio.h>
#include <stdlib.h>

#define DIM 50
#define MAX_COMMANDS 100
#define MAX_COMMAND_LEN 5


enum commands{PEN_UP=1, PEN_DOWN, RIGHT, LEFT, STRAIGHT, RENDER};
const char DRAW_CHAR = '*';

struct turtle {
  int pos[2];
  int heading[2];
  enum commands pen;
};


void update_grid(
    int grid[DIM][DIM], struct turtle *t, int start_x, int start_y) {
  int low_x, low_y, high_x, high_y;

  if (start_x <= t->pos[0]) {
    low_x = start_x;
    high_x = t->pos[0];
  } else {
    low_x = t->pos[0];
    high_x = start_x;
  }
  if (start_y <= t->pos[1]) {
    low_y = start_y;
    high_y = t->pos[1];
  } else {
    low_y = t->pos[1];
    high_y = start_y;
  }
  for (int x = low_x; x <= high_x; x++) {
    for (int y = low_y; y <= high_y; y++) {
      grid[x][y] = 1;
    }
  }
}


void update_turtle_position(struct turtle *t, int steps) {
  if (t->heading[0] == 0) {    // moving L/R
    if (t->heading[1] == 1) {  // R
      t->pos[1] += steps;
    } else {                   // L
      t->pos[1] -= steps;
    }
  } else {                     // moving U/D
    if (t->heading[0] == 1) {  // D
      t->pos[0] += steps;
    } else {                   // U
      t->pos[0] -= steps;
    }
  }
}


void go_straight(int grid[DIM][DIM], int steps, struct turtle *t) {
  int start_x = t->pos[0];
  int start_y = t->pos[1];
  
  update_turtle_position(t, steps);
  if (t->pen == PEN_DOWN) {
    update_grid(grid, t, start_x, start_y);
  }
}


void render(int grid[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (grid[i][j] == 1) {
        printf("%c", DRAW_CHAR);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}


void turn(struct turtle *t, enum commands direction) {
  int states[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // R, D, L, U
  int current_heading_idx;

  for (int i = 0; i < 4; i++) {
    if (t->heading[0] == states[i][0] && t->heading[1] == states[i][1]) {
      current_heading_idx = i;
      break;
    }
  }
  if (direction == RIGHT) {
    current_heading_idx = (current_heading_idx + 1) % 4;
  } else {
    current_heading_idx = (current_heading_idx - 1) % 4;
  }
  t->heading[0] = states[current_heading_idx][0];
  t->heading[1] = states[current_heading_idx][1];
}


void update_state(int grid[DIM][DIM], int command, struct turtle *t) {
  switch (command) {
    case PEN_UP:
      t->pen = PEN_UP;
      break;
    case PEN_DOWN:
      t->pen = PEN_DOWN;
      break;
    case RIGHT:
      turn(t, RIGHT);
      break;
    case LEFT:
      turn(t, LEFT);
      break;
    case RENDER:
      render(grid);
      break;
    default:
      go_straight(grid, -command, t);
  }
}


int get_steps(char command_str[MAX_COMMAND_LEN]) {
  char steps_str[MAX_COMMAND_LEN - 2];
  int steps = 0;

  for (int i = 2; i < MAX_COMMAND_LEN; i++) {
    steps_str[i - 2] = command_str[i];
    if (command_str[i] == '\0') { break; }
  }
  steps = -1 * atoi(steps_str);
  return steps;
}


int get_command() {
  /* return the <command> received from user; if 5,n (go straight n steps),
     return -n, otherwise just return the value received */
  char command_str[MAX_COMMAND_LEN];
  int command;

  printf("Enter next command: ");
  scanf("%s", command_str);
  command = atoi(command_str);
  if (command == 5) {
    command = get_steps(command_str);
  }
  return command;
}


int main() {
  int grid[DIM][DIM] = {0};
  struct turtle yertle = {{0, 0}, {0, 1}, PEN_UP};
  int command = get_command();

  while (command != 9) {
    printf("Got %d\n", command);
    update_state(grid, command, &yertle);
    command = get_command();
  }
}
