#ifndef ELEVATOR_H
#define ELEVATOR_H


#include "bell.h"
#include "door.h"
#include "elevator_button.h"


class Floor;
class Person;


class Elevator {
 public:
  Elevator(Floor&, Floor&);
  ~Elevator();
  void summon(int);
  void prepare_to_leave(bool);
  void process_time(int);
  void passenger_enters(Person* const);
  void passenget_exits();
  ElevatorButton elevator_button;

 private:
  void process_possible_arrival();
  void process_possible_departure();
  void arrive_at_floor(Floor&);
  void move();
  // time to move between floors
  static const int ELEVATOR_TRAVEL_TIME;
  static const int UP;
  static const int DOWN;
  int current_building_clock_time;
  bool is_moving;
  int direction;
  int current_floor;
  int arrival_time;
  bool floor1_needs_service;
  bool floor2_needs_service;
  Floor& floor1_ref;
  Floor& floor2_ref;
  Person* passenger_ptr;
  Door door;
  Bell bell;
};


#endif
