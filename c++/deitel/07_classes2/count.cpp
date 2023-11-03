#include <iostream>
using namespace std;


class Count {
  // a friend class or function has access to private and protected fields; the class
  // whose private fields are needed must "grant" friendship to the other class/func
  friend void set_x(Count&, int);

public:
  Count() { x = 0; }
  void print() const { cout << x << endl; }

private:
  int x;
};


void set_x(Count& c, int val) { c.x = val; }


int main() {
  Count counter;
  
  cout << "counter.x at instantiation: ";
  counter.print();
  set_x(counter, 8);
  cout << "counter.x aftrer call to set_x(): ";
  counter.print();
  return 0;
}
