#ifndef CLOCK_H
#define CLOCK_H


class Clock {
 public:
  Clock();
  ~Clock();
  void tick();
  int get_time() const;

 private:
  int time;
};


#endif
