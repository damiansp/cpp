#include <stdio.h>


enum Colors {
  Red,
  Yellow,
  Blue
};


int main(void) {
  enum Colors color = Blue;
  switch (color) {
  case Red:
    printf("It's red\n"); break;
  case Yellow:
    printf("It's yellow\n"); break;
  case Blue:
    printf("It's blue\n"); break;
  default:
    break;
  }
}
