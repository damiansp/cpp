#include <stdio.h>


typedef struct {
  char* name;
  int age;
  double cash;
} Person;


int main(void) {
  Person bob;
  bob.name = "Bob Dobolina";
  bob.age = 47;
  bob.cash = 85.43;
  printf("%s, age %d has $%.2f on hand\n", bob.name, bob.age, bob.cash);
}
