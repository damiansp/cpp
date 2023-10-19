class Rectangle {
 public:
  Rectangle(double=1., double=1.);
  void set_height(double);
  void set_width(double);
  double get_height();
  double get_width();
  double get_area();
  double get_perimeter();
  void print();
  
 private:
  double height;
  double width;
};
