#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rand_choice(int array[], int len);


int main(void) {
  const int LEN = 5;
  int evens[LEN] = {2, 4, 6, 8, 10};
  int odds[LEN] = {3, 5, 7, 9, 11};
  int fours[LEN] = {6, 10, 14, 18, 22};

  srand(time(NULL)); // seed rand gen
  printf("Sampling from evens: %d\n", rand_choice(evens, LEN));
  printf("Sampling from oddss: %d\n", rand_choice(odds, LEN));
  printf("Sampling from fours: %d\n", rand_choice(fours, LEN));
  
  return 0;
}


int rand_choice(int array[], int len) {
  return array[rand() % len];
}
