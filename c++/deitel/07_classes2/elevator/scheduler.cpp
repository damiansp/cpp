#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

#include "floor.h"
#include "person.h"
#include "scheduler.h"


Scheduler::Scheduler(Floor& first_floor, Floor& second_floor):
    current_clock_time(0), floor1_ref(first_floor), floor2_ref(second_floor) {
  srand(time(0));
  cout << "scheduler created" << endl;
  schedule_time(floor1_ref);
  schedule_time(floor2_ref);
}


Scheduler::~Scheduler() { cout << "Scheduler destroyed" << end; }


void Scheduler::schedule_time(const Floor& floor) {
  int floor_number = floor.get_number();
  int arrival_time = current_clock_time + (5 + rand() % 16);

  floor_number == Floor::FLOOR1
    ? floor1_arrival_time = arrival_time
    : floor2_arrival_time = arrival_time;
  cout << "(scheduler schedules next perosn for floor " << floor_number
       << " at time " << arrival_time << ')' << endl;
}


void Scheduler::delay_time(const Floor& floor) {
  int floor_number = floor.get_number();
  int arrival_time = (floor_number == Floor::FLOOR1)
    ? ++floor1_arrival_time
    : ++floor2_arrival_time;

  cout << "(scheduler delays next person for floor " << floor_number
       << " until time " << arrival_time << ')' << endl;
}
