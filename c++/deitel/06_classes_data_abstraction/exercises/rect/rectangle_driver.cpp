#include <iostream>
using namespace std;

#include "rectangle.h"


int main() {
  Rectangle unit_square = Rectangle();
  Rectangle r1 = Rectangle(1.2, 3.4);


  unit_square.print();
  cout << "Area: " << unit_square.get_area() << endl;
  cout << "Height: " << unit_square.get_height() << "; Width: " << unit_square.get_width();
  cout << "\nPerimeter: " << unit_square.get_perimeter() << endl;
  cout << "Area: " << unit_square.get_area() << endl;
  cout << endl;

  r1.print();
  cout << "Area: " << r1.get_area() << endl;
  cout << "Height: " << r1.get_height() << "; Width: " << r1.get_width();
  cout << "\nPerimeter: " << r1.get_perimeter() << endl;
  cout << "Area: " << r1.get_area() << endl;
  cout << endl;

  r1.set_height(5.6);
  r1.set_width(23.45);
  r1.print();
  cout << "Area: " << r1.get_area() << endl;
  cout << "Height: " << r1.get_height() << "; Width: " << r1.get_width();
  cout << "\nPerimeter: " << r1.get_perimeter() << endl;
  cout << "Area: " << r1.get_area() << endl;
  cout << endl;
}
