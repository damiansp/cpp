#ifndef CIRCLE_H
#define CIRCLE_H


#include <iomanip>
#include <iostream>
using namespace std;

#include "point.h"


// Circle inherits from Point
class Circle: public Point {
  friend ostream& operator<<(ostream&, const Circle&);

 public:
  Circle(double r=0.0, int x=0, int y=0);
  void set_radius(double);
  double get_radius() const;
  double get_area() const;

 protected:
  double radius;
};


#endif
