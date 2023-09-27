#ifndef FLOOR_BUTTON_H
#define FLOOR_BUTTON_H


class Elevator;


class FloorButton {
public:
  FloorButton(int, Elevator&);
  ~FloorButton();
  void push();
  void reset();

private:
  int floor_number;
  bool is_pressed;
  Elevator& elevator_ref;
};


#endif
