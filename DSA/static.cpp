#include <iostream>
using namespace std;

int main() {
    int staticArray[5]; // Static allocation of an array of 5 integers
    for (int i = 0; i < 5; ++i) {
        staticArray[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        cout << staticArray[i] << " ";
    }
    return 0;
}
