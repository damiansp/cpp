#ifndef ELEVATOR_H
#define ELEVATOR_H


class Floor;


class Elevator {
 public:
  Elevator(Floor&, Floor&);
  ~Elevator();
  void summon(int);
  void prepare_to_leave();
  void process_time(int);
  void passenger_enters();
  void passenger_exits();

 private:
  bool is_moving;
  int direction;
  int current_floor;
  int arrival_time;
  Floor& floor1_ref;
  Floor& floor2_ref;
};


#endif
