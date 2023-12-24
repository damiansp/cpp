#ifndef PERSON_H
#define PERSON_H


class Elevator;
class Floor;


class Person {
 public:
  Person(const int);
  ~Person();
  int get_ID() const;
  void step_onto_floor(Floor&);
  void enter_elevator(Elevator&, Floor&);
  void exit_elevator(const Floor&, Elevator&) const;

 private:
  static int count;
  const int ID;
  const int destination_floor;
};


#endif
