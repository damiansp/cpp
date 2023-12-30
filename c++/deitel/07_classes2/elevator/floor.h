#ifndef FLOOR_H
#define FLOOR_H


#include "floor_button.h"
#include "light.h"


class Elevator;
class Person;


class Floor {
 public:
  Floor(int, Elevator&);
  ~Floor();
  bool is_occupied() const;
  int get_number() const;
  void person_arrives(Person* const);
  Person* elevator_arrived();
  void elevator_leaving();
  void person_boarding_elevator();
  static const int FLOOR1;
  static const int FLOOR2;
  FloorButton button;

 private:
  const int floor_number;
  Elevator& elevator_ref;
  Person* occupant_ptr;
  Light light;
};


#endif
