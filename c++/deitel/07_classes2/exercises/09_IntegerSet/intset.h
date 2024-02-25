class IntegerSet {
 public:
  IntegerSet();
  void push(int);
  void remove(int);
  IntegerSet get_intersection(IntegerSet*);
  IntegerSet get_union(IntegerSet*);
  bool equals(IntegerSet*);
  void print() const;

 private:
  int array[101];
};
