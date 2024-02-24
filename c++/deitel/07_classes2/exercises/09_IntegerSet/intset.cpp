#include <iostream>
using namespace std;

#include "intset.h"

/*
  class IntegerSet {
 public:
  IntegerSet();
  IntegerSet(int[]);
  void push(int);
  void push(int*);
  void remove(int);
  void remove(int*);
  IntegerSet get_intersection(IntegerSet*);
  IntegerSet get_union(IntegerSet*);
  void print();

 private:
  int array[101];
n};
*/


IntegerSet::IntegerSet() {;}


void IntegerSet::push(int e) {
  array[e] = 1;
}


void IntegerSet::print() const {
  cout << "{";
  bool has_vals = false;
  for (int i = 0; i <= 101; i++) {
    if (array[i] != 0) {
      if (has_vals) {cout << ", "; }
      else { has_vals = true; }
      cout << i;
    }
  }
  cout << "}";
}
