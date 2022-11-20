#include <stdio.h>


enum day {SUN, MON, TUES, WED, THUR, FRI, SAT};


void print_day(enum day d) {
  if (d > 6) { printf("Bad day value: %d\n", d); }
  switch (d) {
    case FRI:
      printf("Friday"); break;
    case SAT:
      printf("Saturday"); break;
    case SUN:
      printf("Sunday"); break;
    default:
      printf("Weekday"); break;
  }
}


enum day next_day(enum day d) {
  return (d + 1) % 7;
}


int main() {
  enum day today = FRI;

  print_day(today);
  printf("\n");
  print_day(next_day(today));
  printf("\n");

  return 0;
}
