#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee {
 public:
  Employee(const char*, const char*);
  void print() const;
  ~Employee();

 private:
  char* name;
  char* surname;
};


#endif
