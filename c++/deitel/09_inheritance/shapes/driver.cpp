#include <iomanip>
#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"


int main() {
  Point* point_p = 0, p(30, 50);
  Circle* circle_p = 0, c(2.7, 120, 89);

  cout << "Point p: " << p << "\nCirlce c: " << c << endl;
  point_p = &c;
  cout << "\nCircle c (via *point_p): " << *point_p << endl;
  circle_p = static_cast<Circle*>(point_p);
  cout << "\nCircle c (via *circle_p):\n" << *circle_p
       << "\nArea of object circle_p points to: " << circle_p->get_area()
       << endl;
  point_p = &p; // bad forming treating Point as Cirle
  circle_p = static_cast<Circle*>(point_p);
  cout << "\nPoint p (via *circle_p):\n" << *circle_p
       << "\nArea of object circle_p points to: " << circle_p->get_area()
       << endl;
  return 0;
}
