#include <iostream>
using namespace std;

#include "time.h"


void increment_minutes(Time&, const int);


int main() {
  Time t = Time(1, 23, 45);  // default settings
  Time u = Time(1, 23, 59);  // default settings
  Time v = Time(1, 59, 59);  // default settings
  Time w = Time(23, 59, 59);  // default settings

  t.print();
  cout << " -> ";
  t.tick();
  t.print();
  cout << endl;
  
  u.print();
  cout << " -> ";
  u.tick();
  u.print();
  cout << endl;
  
  v.print();
  cout << " -> ";
  v.tick();
  v.print();
  cout << endl;

  w.print();
  cout << " -> ";
  w.tick();
  w.print();
  cout << endl; 
}
