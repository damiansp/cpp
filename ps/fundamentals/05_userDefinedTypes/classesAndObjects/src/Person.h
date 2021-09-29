#include <string>


class Person {
private:
  std::string firstname;
  std::string surname;
  int age;

public:
  Person(std::string first, std::string last, int age); // constructor
  Person();
  ~Person();
  std::string getName();
};
