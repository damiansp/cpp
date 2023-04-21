#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void handle_signal(int sigval);


int main() {
  signal(SIGINT, handle_signal);
  srand(time(NULL));
  for (int i = 1; i <= 100; ++i) {
    int x = 1 + rand() % 50;
    if (x == 25) { raise(SIGINT); }
    printf("%4d", i);
    if (i % 10 == 0) { printf("\n"); }
  }
}


void handle_signal(int sigval) {
  printf(
    "\nInterrupt signal (%d) received. Do you wish to continue?\n"
    "  1) yes\n"
    "  2) no\n",
    sigval);
  int choice;
  scanf("%d", &choice);
  if (choice == 1) { signal(SIGINT, handle_signal); } // re-register for next
  else { exit(EXIT_SUCCESS); }
}
