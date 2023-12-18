#include <iostream>
using namespace std;

#include "elevator.h"
#include "floor_button.h"


FloorButton::FloorButton(const int number, Elevator& elev):
    floor_number(number), is_pressed(false), elevator_ref(elev) {
  cout << "floor " << floor_number << " button created" << endl;
}


FloorButton::~FloorButton() {
  cout << "floor " << floor_number << " button destroyed" << endl;
}


void FloorButton::press() {
  is_pressed = true;
  cout << "floor " << floor_number << " button summons elevator" << endl;
  elevator_ref.summon(floor_number);
}


void FloorButton::reset() { is_pressed = false; }
