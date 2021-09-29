#include "Person.h"


Person::Person(std::string first, std::string last, int age) :
  firstname(first),
  surname(last),
  age(age) {

}


std::string Person::getName() {
  return firstname + " " + surname;
}
