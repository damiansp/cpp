#include <iostream>
using namespace std;


void cube_by_val(int*);


int main() {
  int n = 5;

  cout << "n: " << n << endl;
  cube_by_val(&n);
  cout << "n^3: " << n << endl;
  return 0;
}


void cube_by_val(int* np) {
  *np =  *np * *np * *np;
}
