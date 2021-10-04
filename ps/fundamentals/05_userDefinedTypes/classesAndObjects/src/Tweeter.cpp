#include <iostream>
using std::string;
using std::cout;
using std::endl;
#include "Tweeter.h"


Tweeter::Tweeter(string first, string last, int age, string handle):
  Person(first, last, age),
  twitterhandle(handle) {

  cout << "Constructing Tweeter: " << twitterhandle << endl;
}


Tweeter::~Tweeter() {
  cout << "Destructing Tweeter: " << twitterhandle << endl;
}
