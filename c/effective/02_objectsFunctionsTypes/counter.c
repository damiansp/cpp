#include <stdio.h>


static unsigned int counter = 0;


void increment(void) {
  counter++;
  printf("Counter: %d\n", counter);
}


int retrieve_counter(void) {
  return counter;
}


int main(void) {
  for (int i = 0; i < 5; ++i) {
    increment();
  }
  int count = retrieve_counter();
  printf("Retrieved counter: %d\n", count);
}
