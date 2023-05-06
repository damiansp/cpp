#include <iostream>
using namespace std;


inline void swap(int& i, int& j) {
  int temp = i;
  i = j;
  j = temp;
}


/* Func can have same name/be overloaded */
inline void swap(double& i, double& j) {
  double temp = i;
  i = j;
  j = temp;
}

