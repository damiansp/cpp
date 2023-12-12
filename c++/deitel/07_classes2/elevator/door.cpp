#include <iostream>
using namespace std;

#include "door.h"
#include "elevator.h"
#include "floor.h"
#include "person.h"


Door::Door(): is_open(false) { cout << "door created" << endl; }


Door::~Door() { cout << "door destroyed" << endl; }


void Door::open(
    Person* const passenger_ptr,
    Person* const next_passenger_ptr,
    Floor& current_floor,
    Elevator& elevator) {
  if (!is_open) {
    is_open = true;
    cout << "elevator opens on floor " << current_floor.get_number() << endl;
    if (passenger_ptr != 0) {
      passenger_ptr->exit_elevator(current_floor, elevator);
      delete passenger_ptr;
    }
    if (next_passenger_ptr != 0) {
      next_passenger_ptr->enter_elevator(elevator, current_floor);
    }
  }
}


void Door::close(const Floor& current_floor) {
  if (is_open) {
    is_open = false;
    cout << "elevator close on floor " << current_floor.get_number() << endl;
  }
}
