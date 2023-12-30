#include <iostream>
using namespace std;

#include "elevator.h"
#include "elevator_button.h"


ElevatorButton::ElevatorButton(Elevator& elev):
    is_pressed(false),
    elevator_ref(elev) {
  cout << "elevator button created" << endl;
}


ElevatorButton::~ElevatorButton() {
  cout << "elevator button destroyed" << endl;
}


void ElevatorButton::press() {
  is_pressed = true;
  cout << "elevator button tells elevator to prepare to leave" << endl;
  elevator_ref.prepare_to_leave(true);
}


void ElevatorButton::reset() { is_pressed = false; }
