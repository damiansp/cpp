#include <iostream>
using namespace std;

#include "date.h"


int main() {
  Date d1(227, 1976);
  Date d2(3, 11, 1976);
  Date d3("December", 31, 1999);

  d1.print();
  cout << " ";
  d1.print_american();
  cout << " ";
  d1.print_long();
  cout << endl;

  d2.print();
  cout << " ";
  d2.print_american();
  cout << " ";
  d2.print_long();
  cout << endl;

  d3.print();
  cout << " ";
  d3.print_american();
  cout << " ";
  d3.print_long();
  cout << endl;
}
