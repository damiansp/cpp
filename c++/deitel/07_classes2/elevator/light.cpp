#include <iostream>
using namespace std;

#include "light.h"


Light::Light(const char* string): is_on(false), floor_name(string) {
  cout << floor_name << " light created" << endl;
}


Light::~Light() { cout << floor_name << " light destroyed" << endl; }


void Light::turn_on() {
  is_on = true;
  cout << floor_name << " turns on its light" << endl;
}


void Light::turn_off() {
  is_on = false;
  cout << floor_name << " turns off its light" << endl; 
}
