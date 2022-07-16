#include <stdio.h>


typedef struct {
  char name[50];
  int age;
  double cash;
} Person;


int main(void) {
  Person bob = {"Bob Dobolina", 47, 88.99};
  printf("%s, age %d has $%.2f on hand", bob.name, bob.age, bob.cash);
}
