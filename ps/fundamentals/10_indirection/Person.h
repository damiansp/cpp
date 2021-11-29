#pragma once
#include <string>


class Person {
private:
  std::string firstname;
  std::string surname;
  int age;

public:
  Person(std::string first, std::string last, int age); // constructor
  ~Person();
  std::string getName() const;
  int getAge() const { return age; }
  void setAge(int a) { age = a; }
};
