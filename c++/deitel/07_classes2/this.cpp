#include <iostream>
using namespace std;


class Test {
public:
  Test(int=0);
  void print() const;

private:
  int x;
};


Test::Test(int a) { x = a; }


void Test::print() const {
  cout <<   "x:         " << x
       << "\nthis->x:   " << this->x
       << "\n(*this).x: " << (*this).x << endl;
}


int main() {
  Test test(12);

  test.print();
  return 0;
}
