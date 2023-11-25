#include "implementation.h"
#include "interface.h"


Interface::Interface(int v): ptr (new Implementation(v)) { ; }


void Interface::set_value(int v) { ptr->set_value(v); }


int Interface::get_value() const { return ptr->get_value(); }


Interface::~Interface() { delete ptr; }
