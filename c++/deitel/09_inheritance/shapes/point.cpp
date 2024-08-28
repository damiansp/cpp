#include <iostream>
#include "point.h"


Point::Point(int a, int b) { set_point(a, b); }


void Point::set_point(int a, int b) {
  x = a;
  y = b;
}


ostream& operator<<(ostream& out, const Point& p) {
  out << '(', << p.x << ', ' << p.y << ')';
  return out;
}
