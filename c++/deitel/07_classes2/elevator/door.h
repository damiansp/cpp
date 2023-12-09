#ifndef DOOR_H
#define DOOR_H


class Elevator;
class Floor;
class Person;


class Door {
 public:
  Door();
  ~Door();
  void open(Person* const, Person* const, Floor&, Elevator&);
  void close(const Floor&);

 private:
  bool is_open;
};


#endif
