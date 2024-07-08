#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; 
    } else {
        return base * power(base, exponent - 1); 
    }
}
int main() {
    int base, exponent;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

    return 0;
}
