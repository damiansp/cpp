#include <iostream>


int seconds_since_12(int hr, int min, int sec) {
  return hr*60*60 + min*60 + sec;
}


int main() {
  printf("00:00:05: %d\n", seconds_since_12(0, 0, 5));
  printf("00:02:05: %d\n", seconds_since_12(0, 2, 5));
  printf("04:02:05: %d\n", seconds_since_12(4, 2, 5));
  return 0;
}
