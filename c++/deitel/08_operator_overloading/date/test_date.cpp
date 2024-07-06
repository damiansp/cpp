#include <iostream>
using namespace std;

#include "date.h"


int main() {
  Date d1, d2(1992, 12, 27), d3(8045, 0, 99);

  cout << "d1: " << d1
       << "\nd2: " << d2
       << "\nd3: " << d3 << "\n\n";
  cout << "d2 += 7: " << (d2 += 7) << "\n\n";
  d3.set_date(1992, 3, 18);
  cout << "d3: " << d3;
  cout << "\n++d3: " << ++d3 << "\n\n";

  Date d4(1969, 3, 18);
  cout << "d4: " << d4 << endl;
  cout << "++d4: " << ++d4 << endl;
  cout << "d4: " << d4 << endl;
  cout << "d4++: " << d4++ << endl;
  cout << "d4: " << d4 << endl;
  
  return 0;
}
