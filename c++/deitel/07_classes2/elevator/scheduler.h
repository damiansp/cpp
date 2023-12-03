#ifndef SCHEDULER_H
#define SCHEDULER_H


class Floor;


class Scheduler {
 public:
  Scheduler(Floor&, Floor&);
  ~Scheduler();
  void process_time(int);

 private:
  void schedule_time(const Floor&);
  void delay_time(const Floor&);
  void create_new_person(Floor&);
  void handle_arrivals(Floor&, int);
  int current_clock_time;
  Floor& floor1_ref;
  Floor& floor2_ref;
  int floor1_arrival_time;
  int floor2_arrival_time;
};


#endif

