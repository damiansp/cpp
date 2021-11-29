#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Person.h"



Person::Person(string first, string last, int age):
  firstname(first), surname(last), age(age) {
  cout << "constructing " << firstname << " " << surname << " (age: " << age
       << ")" << endl;
}


Person::~Person() {
  cout << "destructing " << firstname << " " << surname << endl;
}


std::string Person::getName() const {
  return firstname + " " + surname;
}
