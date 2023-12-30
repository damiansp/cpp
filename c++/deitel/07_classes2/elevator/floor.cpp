#include <iostream>
using namespace std;

#include "elevator.h"
#include "floor.h"
#include "person.h"


const int Floor::FLOOR1 = 1;
const int Floor::FLOOR2 = 2;


Floor::Floor(int n, Elevator& elev):
    button(n, elev),
    floor_number(n),
    elevator_ref(elev),
    occupant_ptr(0),
    light(floor_number == 1 ? "floor1" : "floor2") {
  cout << "floor " << floor_number << " created" << endl;
}


Floor::~Floor() { cout << "floor " << floor_number << " destroyed" << endl; }


bool Floor::is_occupied() const { return (occupant_ptr != 0); }


int Floor::get_number() const { return floor_number; }


void Floor::person_arrives(Person* const person_ptr) {
  occupant_ptr = person_ptr;
}


Person* Floor::elevator_arrived() {
  cout << "floor " << floor_number << " resets its button" << endl;
  button.reset();
  light.turn_on();
  return occupant_ptr;
}


void Floor::elevator_leaving() { light.turn_off(); }


void Floor::person_boarding_elevator() { occupant_ptr = 0; }
