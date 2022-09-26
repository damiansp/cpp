#include <stdio.h>
#include <stdlib.h>

#define N_ROLLS 6000
#define N_SIDES 6


int roll_die(int sides);


int main(void) {
  int n1 = 0,
    n2 = 0,
    n3 = 0,
    n4 = 0,
    n5 = 0,
    n6 = 0,
    value;

  for (int roll = 1; roll <= N_ROLLS; ++roll) {
    value = roll_die(N_SIDES);
    switch (value) {
    case 1: ++n1; break;
    case 2: ++n2; break;
    case 3: ++n3; break;
    case 4: ++n4; break;
    case 5: ++n5; break;
    case 6: ++n6; break;
    }
  }
  printf("%s%13s\n", "Value", "Frequency");
  printf("   1%13d\n", n1);
  printf("   2%13d\n", n2);
  printf("   3%13d\n", n3);
  printf("   4%13d\n", n4);
  printf("   5%13d\n", n5);
  printf("   6%13d\n", n6);
  return 0;
}


int roll_die(int sides) {
  return rand() % N_SIDES + 1;
}
