#include <iostream>
using namespace std;

#include "destruct.h"


CreateAndDestroy::CreateAndDestroy(int val) {
  datum = val;
  cout << "Object " << datum << " constructor called";
}


CreateAndDestroy::~CreateAndDestroy() {
  cout << "Object " << datum << " destructor called" << endl;
}
