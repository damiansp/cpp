#include <stdio.h>


enum Lights {RED, YELLOW, GREEN};


int main(void) {
  enum Lights my_lights = GREEN;
  int x = my_lights;
  printf("Converting enum GREEN to int: %d\n", x);
}
