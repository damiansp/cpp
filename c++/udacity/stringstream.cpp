#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main() {
    string input;
    float len, wid;
    
    cout << "Room length: ";
    getline(cin, input);
    stringstream(input) >> len;
    cout << "Room width: ";
    getline(cin, input);
    stringstream(input) >> wid;
    cout << "Area is " << len * wid << endl;
    return 0;
}
