#include <iostream>
using namespace std;

#include "destruct.h"


void create();


CreateAndDestroy first(1);


int main() {
  cout << " (global created before main)" << endl;
  CreateAndDestroy second(2);
  cout << " (local automatic in main)" << endl;
  static CreateAndDestroy third(3);
  cout << " (local static in main)" << endl;
  create();
  CreateAndDestroy fourth(4);
  cout << " (local automatic in main)" << endl;
  return 0;
}


void create() {
  CreateAndDestroy fifth(5);
  cout << " (local automatic in create)" << endl;
  static CreateAndDestroy sixth(6);
  cout << " (local static in create)" << endl;
  CreateAndDestroy seventh(7);
  cout << " (local automatic in create)" << endl;
}
