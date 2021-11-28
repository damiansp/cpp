#pragma once
#include <string>


class Person {
private:
  std::string firstname;
  std::string surname;
  int age;

  // "friend" gets access to private members
  friend bool operator<(int i, Person const& p); 

public:
  Person(std::string first, std::string last, int age); // constructor
  ~Person();
  std::string getName() const;
  int getAge() const { return age; }
  void setAge(int a) { age = a; }
  bool operator<(Person const& p) const;
  bool operator<(int i) const;
};


bool operator<(int i, Person const& p);
