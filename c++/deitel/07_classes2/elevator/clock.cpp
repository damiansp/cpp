#include <iostream>
using namespace std;

#include "clock.h"


Clock::Clock(): time(0) { cout << "clock created" << endl; }


Clock::~Clock() { cout << "clock destroyed" << endl; }


void Clock::tick() { time++; }


int Clock::get_time() const { return time; }
