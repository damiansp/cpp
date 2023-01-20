#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print_position(int position, char c, int distance) {
  int i = 1;
  while (i++ < position) { printf("-"); }
  printf("%c", c);
  while (i++ < distance) { printf(" "); }
  printf("|\n");  // "goal"
}


void print_positions(int hare, int tortoise, int distance) {
  print_position(hare, 'H', distance);
  print_position(tortoise, 'T', distance);  
}


int advance(int pos, char runner) {
  int fate = rand() % 10;
  
  if (runner == 'H') {
    if (fate < 2) { ; } // "sleeping"
    else if (fate < 4) { pos += 9; }
    else if (fate < 5) { pos -=12; }
    else if (fate < 8) { pos++; }
    else { pos -= 2; }
  } else {
    if (fate < 5) { pos += 3; }
    else if (fate < 7) { pos -= 6; }
    else { pos++; }
  }
  return pos > 1 ? pos : 1;
}


void print_outcome(int hare, int tortoise, int distance) {
  if (hare > distance && tortoise > distance) {
    printf("It's a tie!\n");
  } else {
    printf("%s wins!\n", hare > tortoise ? "hare" : "tortoise");
  }
}


int main() {
  const int distance = 70;
  int hare = 1;      // position in race
  int tortoise = 1;

  srand(time(NULL));

  while (hare < distance && tortoise < distance) {
    print_positions(hare, tortoise, distance);
    hare = advance(hare, 'H');
    tortoise = advance(tortoise, 'T');
  }
  print_outcome(hare, tortoise, distance);
}
