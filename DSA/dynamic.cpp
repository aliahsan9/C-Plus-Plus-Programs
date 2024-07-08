#include <iostream>
using namespace std;

int main() {
    int *dynamicArray = new int[5]; // Dynamic allocation of an array of 5 integers
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        cout << dynamicArray[i] << " ";
    }
    delete[] dynamicArray; // Deallocate the dynamic array
    return 0;
}
