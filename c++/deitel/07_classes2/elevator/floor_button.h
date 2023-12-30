#ifndef FLOOR_BUTTON_H
#define FLOOR_BUTTON_H


class Elevator;


class FloorButton {
 public:
  FloorButton(const int, Elevator&);
  ~FloorButton();
  void press();
  void reset();

 private:
  const int floor_number;
  bool is_pressed;
  Elevator& elevator_ref;
};


#endif
