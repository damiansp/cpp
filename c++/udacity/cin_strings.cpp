#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string address;
    string phone;
    const int N = 2;
    
    for (int i = 0; i < N; i++) {
        getline(cin, name);
        getline(cin, address);
        getline(cin, phone);
        cout << name << "\t\t" << address << "\t\t" << phone << endl;
    }
    return 0;
}
