#include <iostream>

#include "Person.h"


int main() {
  Person p1("Bob", "Dobolina", 47);
  {
    // Construct and immediately remove from scope to see destructor time
    Person p2; 
  }
  std::cout << "finished p2 block" << std::endl;
  std::string name = p1.getName();
  //int i = p1.age; // private (inaccessible)
  
  return 0;
}
