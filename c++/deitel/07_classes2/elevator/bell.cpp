#include <iostream>
using namespace std;

#include "bell.h"


Bell::Bell() { cout << "bell created" << endl; }


Bell::~Bell() { cout << "bell destroyed" << endl; }


void Bell::ring() const { cout << "elevator rings bell" << endl; }
