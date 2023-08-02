#include <cstring>
#include <iostream>
using namespace std;


int main() {
  char x[] = "Happy Birthday to You";
  char y[25],
    z[15];

  cout << "x: " << x << "\ny: " << strcpy(y, x) << '\n';
  strncpy(z, x, 14); // does not copy \0
  z[14] = '\0';
  cout << "z: " << z << endl;
  return 0;
}
