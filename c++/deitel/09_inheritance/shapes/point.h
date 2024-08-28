#ifndef POINT_H
#define POINT_H

#include <iostream>


class Point {
  friend ostream& operator<<(ostream&, const Point&);

 public:
  Point(int=0, int=0);
  void set_point(int, int);
  int get_x() const { return x; }
  int get_y() const { return y; }

 protected:  // accessible from child classes
  int x, y;
};


#endif
