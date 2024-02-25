#include <iostream>
using namespace std;

#include "intset.h"


int main() {
  IntegerSet s1 = IntegerSet();
  IntegerSet s2 = IntegerSet();
  IntegerSet s3 = IntegerSet();
  s1.print();
  cout << endl;
  s2.print();
  cout << endl;

  s1.push(25);
  s1.print();
  cout << endl;

  s1.push(50);
  s1.print();
  cout << endl;

  s1.remove(25);
  s1.print();
  cout << endl;

  s1.push(0);
  s1.push(25);
  s1.push(75);
  s1.push(100);

  s2.push(5);
  s2.push(10);
  s2.push(15);
  s2.push(20);
  s2.push(25);

  cout << "s1: ";
  s1.print();
  cout << "\ns2: ";
  s2.print();
  cout << "\nIntersection: ";
  IntegerSet intersection = s1.get_intersection(&s2);
  intersection.print();
  cout << "\nUnion: ";
  IntegerSet union_set = s1.get_union(&s2);
  union_set.print();
  cout << endl;

  s3.push(0);
  s3.push(25);
  s3.push(50);
  s3.push(75);
  s3.push(100);
  s3.print();
  cout << s3.equals(&s1);
  s3.remove(100);
  cout << s3.equals(&s1);
  return 0;
}
