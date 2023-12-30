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


Scheduler::~Scheduler() { cout << "Scheduler destroyed" << endl; }


void Scheduler::schedule_time(const Floor& floor) {
  int floor_number = floor.get_number();
  int arrival_time = current_clock_time + (5 + rand() % 16);

  floor_number == Floor::FLOOR1
    ? floor1_arrival_time = arrival_time
    : floor2_arrival_time = arrival_time;
  cout << "(scheduler schedules next person for floor " << floor_number
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


void Scheduler::process_time(int time) {
  current_clock_time = time;
  handle_arrivals(floor1_ref, current_clock_time);
  handle_arrivals(floor2_ref, current_clock_time);
}


void Scheduler::create_new_person(Floor& floor) {
  int destination_floor = floor.get_number() == Floor::FLOOR1
    ? Floor::FLOOR2
    : Floor::FLOOR1;
  Person* new_person_ptr = new Person(destination_floor);

  cout << "scheduler creates person " << new_person_ptr->get_ID() << endl;
  new_person_ptr->step_onto_floor(floor);
  schedule_time(floor);
}


void Scheduler::handle_arrivals(Floor& floor, int time) {
  int floor_number = floor.get_number();
  int arrival_time = (floor_number == Floor::FLOOR1)
    ? floor1_arrival_time
    : floor2_arrival_time;

  if (arrival_time == time) {
    if (floor.is_occupied()) { delay_time(floor); }
    else { create_new_person(floor); }
  }
}
