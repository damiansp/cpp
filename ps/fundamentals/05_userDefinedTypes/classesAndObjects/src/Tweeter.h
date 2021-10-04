#pragma once
#include <string>
using std::string;

#include "Person.h"


class Tweeter: public Person {
 private:
  string twitterhandle;
  
 public:
  Tweeter(string first, string last, int age, string handle);
  ~Tweeter();
};
