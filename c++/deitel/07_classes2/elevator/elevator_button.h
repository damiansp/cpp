#ifndef ELEVATOR_BUTTON_H
#define ELEVATOR_BUTTON_H


class Elevator;


class ElevatorButton {
 public:
  ElevatorButton(Elevator&);
  ~ElevatorButton();
  void press();
  void reset();

 private:
  bool is_pressed;
  Elevator& elevator_ref;
};


#endif
