#include <stdio.h>


int seconds_of_day(int h, int m, int s);


int main() {
  int hour, min, sec;
  int total_s;
  printf("Enter current time in military format (HH:MM:SS):");
  scanf("%d:%d:%d", &hour, &min, &sec);
  total_s = seconds_of_day(hour, min, sec);
  printf("Elapsed seconds: %d\n", total_s);
  return 0;
}


int seconds_of_day(int h, int m, int s) {
  int total_s = s;
  total_s += (m * 60);
  total_s += (h * 60 * 60);
  return total_s;
}
