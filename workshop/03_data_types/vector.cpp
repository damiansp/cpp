#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<int> v;

void print_vec() {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
}


int main() {
  print_vec();
}
