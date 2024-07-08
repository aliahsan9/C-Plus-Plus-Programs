
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Size of the array
    int numbers[SIZE]; // Array to store numbers

    // Input numbers from the user
    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Find the minimum number
    int minNumber = numbers[0]; // Assume the first number is the minimum
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i]; // Update minNumber if a smaller number is found
        }
    }

    // Display the minimum number
    cout << "Minimum number: " << minNumber << endl;

    return 0;
}
