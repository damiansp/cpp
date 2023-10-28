#include <iostream>
using namespace std;


class Increment {
public:
  Increment(int c=0, int i=1);
  void add_increment() { count += increment; }
  void print() const;

private:
  int count;
  const int increment;
};


Increment::Increment(int c, int i): increment(i) /* init const member */ {
  count = c;
  //incrememt = i  // if here instead of above: ERR: cannot modify a const obj
}


void Increment::print() const {
  cout << "count: " << count << ", increment: " << increment << endl;
}


int main() {
  Increment value(10, 5);

  cout << "Before incrementing: ";
  value.print();
  for (int i = 0; i < 3; i++) {
    value.add_increment();
    cout << "After increment " << i + 1 << ": ";
    value.print();
  }
  return 0;
}
