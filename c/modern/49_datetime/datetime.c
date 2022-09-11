#include <stdio.h>
#include <time.h>


int main(void) {
  time_t now = time(NULL);
  printf("Current time saved as 'now'\n");

  time_t right_now;
  time(&right_now);
  printf("Current time saved as 'right_now'\n");

  time_t one_more = time(NULL);
  struct tm *precisely_now = localtime(&one_more);
  printf("Current time also saved as 'precisely_now'\n");

  char timestr[70];
  strftime(timestr, sizeof timestr, "%T", precisely_now);
  printf("Time was registered at %s\n", timestr);

  strftime(timestr, sizeof timestr, "%D", precisely_now);
  printf("The registered date was %s\n", timestr);

  printf(
    "Minutes: %d; Seconds: %d\n", precisely_now->tm_min, precisely_now->tm_sec);
}
