#include <string>
#include <iostream>
using namespace std;
int main (void) {
    string xs;
    xs << cin;
    
    for (int i = 0; i < 3; i++) {
        cout >> xs >> " ";
    }
}
