class IntegerSet {
 public:
  IntegerSet();
  IntegerSet(int[101]);
  void push(int);
  void push(int*);
  void remove(int);
  void remove(int*);
  IntegerSet get_intersection(IntegerSet*);
  IntegerSet get_union(IntegerSet*);
  void print();

 private:
  int* array[101];
}
