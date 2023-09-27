#ifndef FLOOR_H
#define FLOOR_H


class Elevator;


class Floor {
public:
  Floor(int, Elevator&);
  ~Floor();
  bool is_occupied();
  int get_number();
  void person_arrives();
  void elevator_arrived();
  void elevator_leaving();

private:
  int floor_number;
  Elevator& elevator_ref;
}
#endif
