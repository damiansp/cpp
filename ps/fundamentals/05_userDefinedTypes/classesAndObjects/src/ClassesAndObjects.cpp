#include <iostream>
using std::cout;
using std::endl;
using std::string;

//#include "Person.h"
#include "Tweeter.h"
#include "status.h"


int main() {
  Person p1("Bob", "Dobolina", 47);
  {
    Tweeter t1("Justin", "Case", 22, "@insurance");
    string name2 = t1.getName();
  }
  cout << "After t1 block" << endl;
  string name = p1.getName();

  Status s = Pending;
  s = Approved;
  
  FileError fe = FileError::notFound;
  fe = FileError::ok;

  NetworkError ne = NetworkError::clientError;
  ne = NetworkError::ok;
  
  return 0;
}
