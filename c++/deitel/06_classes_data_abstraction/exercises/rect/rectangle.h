class Rectangle {
 public:
  Rectangle(double=0., double=0, double=1., double=1.);
  void set_height(double);
  void set_width(double);
  void set_ll(double, double);
  double get_height();
  double get_width();
  double get_area();
  double get_perimeter();
  bool is_square();
  void print();
  
 private:
  double ll_x;  // lower-left x-coordinate
  double ll_y;
  double width;
  double height;
};
