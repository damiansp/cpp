#include <iostream>
using namespace std;

#include "elevator.h"
#include "floor.h"
#include "person.h"


int Person::count = 0;


Person::Person(const int dest_floor):
    ID(++count), destination_floor(dest_floor) {}


Person::~Person() {
  cout << "person " << ID << " exits simulation on floor " << destination_floor
       << " (prson destructor invoked)" << endl;
}


int Person::get_ID() const { return ID; }


void Person::step_onto_floor(Floor& floor) {
  cout << "person " << ID << " steps onto floor " << floor.get_number()
       << endl;
  floor.person_arrives(this);
  cout << "person " << ID << " pushes floor button on floor "
       << floor.get_number() << endl;
  floor.button.press();
}


void Person::enter_elevator(Elevator& elev, Floor& floor) {
  floor.person_boarding_elevator();
  elev.passenger_enters(this);
  cout << "person " << ID << " presses elevator button" << endl;
  elev.button.press();
}


void Person::exit_elevator(const Floor& floor, Elevator& elev) const {
  cout << "person " << ID << " exits elevator on floor " << floor.get_number()
       << endl;
  elev.passenger_exits();
}
