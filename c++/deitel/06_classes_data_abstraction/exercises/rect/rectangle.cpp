#include <iostream>
using namespace std;

#include "rectangle.h"


Rectangle::Rectangle(double h, double w) {
  height = (h > 0. && h < 20.) ? h : 1;
  width = (w > 0. && w < 20.) ? w : 1;
}


void Rectangle::set_height(double h) { height = (h > 0. && h < 20.) ? h : 1; }


void Rectangle::set_width(double w) { width = (w > 0. && w < 20.) ? w : 1; }


double Rectangle::get_height() { return height; }


double Rectangle::get_width() { return width; }


double Rectangle::get_area() { return height * width; }


double Rectangle::get_perimeter() { return 2 * (height + width); }


void Rectangle::print() { cout << "A " << height << "x" << width << " rectangle"; }
