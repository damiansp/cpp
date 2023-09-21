#ifndef LIGHT_H
#define LIGHT_H


class Light {
 public:
  Light(char*);
  ~Light();
  void turn_on();
  void turn_off();

 private:
  bool is_on;
  char* name;
};


#endif
