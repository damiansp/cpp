#ifndef PERSON_H
#define PERSON_H


class Person {
 public:
  Person(int);
  ~Person();
  int get_id();
  void step_onto_floor();
  void enter_elevator();
  void exit_elevator();

 private:
  int id;
};


#endif
