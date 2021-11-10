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


bool Person::operator<(Person const& p) const {
  return age < p.age;
}


bool Person::operator<(int i) const {
  return age < i;
}


bool operator<(int i, Person const& p) {
  // return i < p.getAge(); // if not friend
  return i < p.age; // allowed for friend
}
