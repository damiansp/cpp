class Implementation;  // forward declaration


class Interface {
 public:
  Interface(int);
  void set_value(int);
  int get_value() const;
  ~Interface();

 private:
  Implementation* ptr;
};
