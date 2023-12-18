#include <iostream>
using namespace std;

#include "elevator.h"
#include "floor.h"
#include "person.h"


const int Elevator::ELEVATOR_TRAVEL_TIME = 5;
const int Elevator::UP = 0;
const int Elevator::DOWN = 1;


Elevator::Elevator(Floor& first_floor, Floor& second_floor):
    elevator_button(*this),
    current_building_clock_time(0),
    is_moving(false),
    direction(UP),
    current_floor(Floor::FLOOR1),
    arrival_time(0),
    floor1_needs_service(false),
    floor2_needs_service(false),
    floor1_ref(first_floor),
    floor2_ref(second_floor),
    passenger_ptr(0) {
  cout << "elevator created" << endl;
}


Elevator::~Elevator() { cout << "elevator destroyed" << endl; }


void Elevator::process_time(int time) {
  current_building_cloc_time = time;
  if (is_moving) { process_possible_arrival(); }
  else { process_possible_departure(); }
  if (!is_moving) {
    cout << "elevator at rest of floor " << current_floor << endl;
  }
}


// when moving, determine if it should stop
void Elevator::process_possible_arrival() {
  if (current_building_clock_time == arrival_time) {
    current_floor = 
      current_floor == Floor::FLOOR1 ? Floor::FLOOR2 : Floor::FLOOR1;
    direction = current_floor == Floor::FLOOR1 ? UP : DOWN;
    cout << "elevator arrives on floor " << current_floor << endl;
    arrive_at_floor(current_floor == Floor::FLOOR1 ? floor1_ref : floor2_ref);
    return;
  }
  // else elevator is moving
  cout << "elevator moving " (direction == UP ? "up" : "down") << endl;
}


// determine if elev should move
void Elevator::process_possible_departure() {
  bool current_floor_needs_service = 
    current_floor == Floor::FLOOR1
    ? floor1_needs_service
    : floor2_needs_service;
  bool other_floor_needs_service =
    current_floor == Floor::FLOOR1
    ? floor2_needs_service
    : floor1_needs_service;
  if (current_floor_needs_service) {
    arrive_at_floor(current_floor == Floor::FLOOR1 ? floor1_ref : floor2_ref);
    return;
  }
  prepare_to_leave(other_floor_needs_service);
}
