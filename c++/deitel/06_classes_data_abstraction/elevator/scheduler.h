#ifndef SCHEDULER_H
#define SCHEDULER_H


class Floor;


class Scheduler {
public:
  Scheduler(Floor&, Floor&);
  ~Scheduler();
  void process_time(int);

private:
  void schedule_time(Floor&);
  Floor& floor1_ref;
  Floor& floor2_ref;
  int floor1_arrival_time;
  int floor2_arrival_time;
};


#endif
