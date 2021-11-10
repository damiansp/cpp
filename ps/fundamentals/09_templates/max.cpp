#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

//#include "Person.h"
//#include "BankAccount.h"


template <class T>
T maximum(T const& t1, T const& t2) {
  return t1 > t2 ? t1 : t2;
}


int main() {
  cout << "max(33, 44): " << maximum(33, 44) << endl;
  cout << "max(3.44, 4.33): " << maximum(3.44, 4.33) << endl;

  string s1 = "hello";
  string s2 = "hola";
  cout << "max(\"hello\", \"hola\"): " << maximum(s1, s2) << endl;

  return 0;
}
