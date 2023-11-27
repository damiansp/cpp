#ifndef BUILDING_H
#define BUILDING_H


#include "clock.h"
#include "elevator.h"
#include "floor.h"
#include "scheduler.h"


class Building {
 public:
  Building();
  ~Building();
  void run_simulation(int);

 private:
  Floor floor1;
  Floor floor2;
  Elevator elevator;
  Clock clock;
  Scheduler scheduler;
};


#endif
