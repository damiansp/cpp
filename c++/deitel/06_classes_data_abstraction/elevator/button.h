#ifndef BUTTON_H
#define BUTTON_H


class Elevator;


class Button {
 public:
  Button(Elevator&);
  ~Button();
  void press();
  void reset();

 private:
  bool is_pressed;
  Elevator& elevator_ref;
}


#endif
