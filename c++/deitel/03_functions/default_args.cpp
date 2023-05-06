#include <iostream>
using namespace std;


int box_volume(int length=1, int width=1, int height=1) {
  return length * width * height;
}


int main() {
  cout << "default box volume: " << box_volume()
       << "\nbox_volume(2): " << box_volume(2)
       << "\nbox_volume(2, 3): " << box_volume(2, 3)
       << "\nbox_volume(2, 3, 5): " << box_volume(2, 3, 5) << endl;
  return 0;
}
