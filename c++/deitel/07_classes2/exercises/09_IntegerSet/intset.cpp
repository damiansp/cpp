#include <iostream>
using namespace std;

#include "intset.h"
#define MAX 101


/*
  class IntegerSet {
 public:
  IntegerSet();
  void push(int);
  void remove(int);
  IntegerSet get_intersection(IntegerSet*);
  IntegerSet get_union(IntegerSet*);
bool equals(IntegerSet*);
void print();

 private:
  int array[101];
n};
*/


IntegerSet::IntegerSet() {
  for (int i = 0; i <= MAX; i++) {
    array[i] = 0;
  }
}


void IntegerSet::push(int e) {
  array[e] = 1;
}


void IntegerSet::remove(int e) {
  array[e] = 0;
}


IntegerSet IntegerSet::get_union(IntegerSet* s) {
  IntegerSet union_set = IntegerSet();
  for (int i = 0; i <= MAX; i++) {
    if (s->array[i] == 1 || array[i] == 1) {
      union_set.array[i] = 1;
    }
  }
  return union_set;
}


IntegerSet IntegerSet::get_intersection(IntegerSet* s) {
  IntegerSet intersection = IntegerSet();
  for (int i = 0; i <= MAX; i++) {
    if (s->array[i] == 1 && array[i] == 1) {
      intersection.array[i] = 1;
    }
  }
  return intersection;
}


bool IntegerSet::equals(IntegerSet* s) {
  for (int i = 0; i <= MAX; i++) {
    if (array[i] != s->array[i]) { return false; }
  }
  return true;
}


void IntegerSet::print() const {
  cout << "{";
  bool has_vals = false;
  for (int i = 0; i <= MAX; i++) {
    if (array[i] != 0) {
      if (has_vals) {cout << ", "; }
      else { has_vals = true; }
      cout << i;
    }
  }
  cout << "}";
}
