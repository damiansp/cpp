#ifndef DOOR_H
#define DOOR_H


class Door {
 public:
  Door();
  ~Door();
  void open();
  void close();

 private:
  bool is_open;
};


#endif
