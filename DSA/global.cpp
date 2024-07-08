#include <iostream>

// Global variable
int globalVar;

// Function to multiply the global variable by 2
void multiplyByTwo() {
    globalVar *= 2;
}

int main() {
    // Input a number into the global variable
    std::cout << "Enter a number: ";
    std::cin >> globalVar;

    // Call the function to multiply the value by 2
    multiplyByTwo();

    // Display the value of the global variable
    std::cout << "The value after multiplication is: " << globalVar << std::endl;

    return 0;
}
