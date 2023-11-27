#include <iostream>
using namespace std;

#include "building.h"


int main() {
  int duration;
  Building building;

  cout << "Enter simulation run time: ";
  cin >> duration;
  cin.ignore();  // ignore return char
  cout << endl << "*** BEGINNING ELEVATOR SIMULATION ***" << endl << endl;
  building.run_simulation(duration);
  cout << "*** SIMULATION COMPLETE ***";
  return 0;
}
