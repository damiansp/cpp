#include <iostream>
using namespace std;


int x{1};


void use_local() {
  int x{25};
  cout << "use_local: " << x++ << endl;
  cout << "use_local: " << x << endl;
}


void use_static_local() {
  static int x{50};
  cout << "use_static_local: " << x++ << endl;
  cout << "use_static_local: " << x << endl;
}


void use_global() {
  cout << "use_global: " << x << endl;
  x *= 10;
  cout << "use_global: " << x << endl;
}


int main() {
  cout << "global: " << x << endl;

  const int x{5};
  cout << "main: " << x << endl;
  {
    const int x{7};
    cout << "block: " << x << endl;
  }
  cout << "main: " << x << endl;
  use_local();
  use_static_local();
  use_global();
  use_local();
  use_static_local();
  use_global();
  cout << "main: " << x << endl;
}
