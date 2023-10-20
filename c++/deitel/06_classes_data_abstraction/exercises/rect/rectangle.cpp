#include <iostream>
using namespace std;

#include "rectangle.h"

// Stipulations: all coords must be positive and <= 20.0


Rectangle::Rectangle(double ll_x, double ll_y, double w, double h) {
  ll_x = (ll_x >= 0. && ll_x <= 20.) ? ll_x : 0.;
  ll_y = (ll_y >= 0. && ll_y <= 20.) ? ll_y : 0.;
  width = (ll_x + w >= 0. && ll_x + w <= 20.) ? w : 20. - ll_x;
  height = (ll_y + h >= 0. && ll_y + h <= 20.) ? h : 20. - ll_y;

}


void Rectangle::set_height(double h) {
  height = (h >= 0. && h + ll_y <= 20.) ? h : 20. - ll_y;
}


void Rectangle::set_width(double w) {
  width = (w >= 0. && w + ll_x <= 20.) ? w : 20. - ll_x;
}


void Rectangle::set_ll(double x, double y) {
  ll_x = (x >= 0 && x <= 20) ? x : 0.;
  ll_y = (y >= 0 && y <= 20) ? y : 0.;
  width = (ll_x + width <= 20) ? width : 20. - ll_x;
  height = (ll_y + height <= 20) ? height : 20. - ll_y;
}


double Rectangle::get_height() { return height; }


double Rectangle::get_width() { return width; }


double Rectangle::get_area() { return height * width; }


double Rectangle::get_perimeter() { return 2 * (height + width); }


bool Rectangle::is_square() { return height == width; }


void Rectangle::print() {
  cout << "A " << height << "x" << width << " rectangle";
}
