#include <stdio.h>


struct Person {
  char* name;
  int age;
  double money;
};


int main(void) {
  struct Person p;
  p.name = "Bob Dobolina";
  p.age = 47;
  p.money = 123.45;
  printf(
    "%s is %d years old, and has $%.2f on hand.\n", p.name, p.age, p.money);
}
