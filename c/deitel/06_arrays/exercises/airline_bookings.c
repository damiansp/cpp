#include <stdio.h>

#define N_1ST_CLASS 5
#define N_SEATS 10


void summarize_sales(int seats[N_SEATS]) {
  char *status[6];
  char *class[10];

  printf("Seat status:\n");
  for (int i = 0; i < N_SEATS; i++) {
    *status = seats[i] ? "booked" : "empty";
    *class = (seats[i] < N_1ST_CLASS) ? "1st class" : "Economy";
    printf("%2d: (%s) %s\n", i + 1, *class, *status);
  }
}


void print_boarding_pass(int seat) {
  char *class[8];

  *class = (seat < N_1ST_CLASS) ? "1st\0" : "Economy\0";
  printf("\n========================================\n");
  printf("  You have seat number %d (%s class)\n", seat + 1, *class);
  printf("========================================\n\n");
}


void reserve_ticket(int seats[N_SEATS], int class) {
  int i = class == 1 ? 0 : N_1ST_CLASS;
  int max_idx = class == 1 ? N_1ST_CLASS : N_SEATS;
  int seat_assignment;
  
  for (; i < max_idx; i++) {
    if (seats[i] == 0) {
      seat_assignment = i;
      print_boarding_pass(seat_assignment);
      seats[i] = 1;
      break;
    }
  }
}


int prompt_sale(
    int seats[N_SEATS], int n_first_class_available, int n_economy_available) {
  int class;
  char proceed;
  
  printf(
    "Seat selection:\n 1) First Class\n 2) Economy\n (-1 to close sales)\n> ");
  scanf("%d", &class);
  if (class == -1) {
    printf("Deadline reached. Sales closed.\n");
    return class;
  }
  if (class == 1) {
    if (n_first_class_available) {
      reserve_ticket(seats, class);
      return class;
    } else {
      printf("No 1st class seats left. Economy OK? (y/n): )");
      scanf("%c", &proceed);
      if (proceed == 'y') {
        reserve_ticket(seats, 2);
        return 2;
      } else { return 0; }
    }
  } else if (class == 2) {
    if (n_economy_available) {
      reserve_ticket(seats, class);
      return class;
    } else {
      printf("No economy class seats left. 1st class OK? (y/n): )");
      scanf("%c", &proceed);
      if (proceed == 'y') {
        reserve_ticket(seats, 1);
        return 1;
      } else { return 0; }
    }
  } else {
    printf("Bad class value\n");
    return class;
  }
}


int main() {
  int seats[N_SEATS] = {0};
  int n_first_class_available = N_1ST_CLASS;
  int n_economy_available = N_SEATS - N_1ST_CLASS;
  int class;

  while (n_first_class_available + n_economy_available) {
    class = prompt_sale(seats, n_first_class_available, n_economy_available);
    if (class == -1) { break; }
    else if (class == 1) { n_first_class_available--; }
    else if (class == 2) { n_economy_available--; }
  }
  summarize_sales(seats);
  printf("\n");
  return 0;
}
