#include <iostream>
using namespace std;

#include "building.h"


Building::Building():
    floor1(Floor::FLOOR1, elevator),
    floor2(Floor::FLOOR2, elevator),
    elevator(floor1, floor2),
    scheduler(floor1, floor2) {
  cout << "building created" << endl;
}


Building::~Building() { cout << "building destroyed" << endl; }


void Building::run_simulation(int total_time) {
  int current_time = 0;

  while (current_time < total_time) {
    clock.tick();
    current_time = clock.get_time();
    cout << "TIME: " << current_time << endl;
    scheduler.process_time(current_time);
    elevator.process_time(current_time);
    cin.get();  // pause to let user viewer output
  }
}
