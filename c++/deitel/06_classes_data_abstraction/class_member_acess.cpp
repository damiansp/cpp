#include <iostream>
using namespace std;


class Count {
public:
  int x;
  void print() { cout << "x: " << x << endl; }
};


int main() {
  Count counter;
  Count* ctr_p = &counter;
  Count& ctr_ref = counter;

  cout << "Assigning 7 to x..." << endl;
  counter.x = 7;
  counter.print();

  cout << "Assigning 8 to x using reference..." << endl;
  ctr_ref.x = 8;
  ctr_ref.print();

  cout << " Assigning 9 to x with a pointer..." << endl;
  ctr_p->x = 9;
  ctr_p->print();
  return 0;
}
