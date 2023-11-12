#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee {
 public:
  Employee(const char*, onst char*);
  ~Employee();
  const char* get_name() const;
  const char* get_surname() const;
  static int get_count();

 private:
  char* name;
  char* surname;
  static int count;
};


#endif
