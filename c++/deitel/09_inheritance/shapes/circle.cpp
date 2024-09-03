#include "circle.h"


// Circle w radius r, centered at (a, b)
Circle::Circle(double r, int a, int b): Point(a, b) { set_radius(r); }


void Circle::set_radius(double r) { radius = (r >= 0 ? r : 0); }


double Circle::get_radius() const { return radius; }


double Circle::get_area() const { return 3.14159 * radius * radius; }


ostream& operator<<(ostream& out, const Circle& c) {
  out << "Center = " << static_cast<Point>(c) << "; Radius = "
      << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
      << c.radius;
  return out;
}
