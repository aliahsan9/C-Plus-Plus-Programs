
#include<iostream>
using namespace std;

int main() {
    const float pi = 3.14;
    float radius, result;
    int choice;

    cout << "Enter the radius of the circle:";
    cin >> radius;

    cout << "Enter 1 for area and 2 for circumference:";
    cin >> choice;

    if (choice == 1) {
        result = pi * radius * radius;
        cout << "Area = " << result << endl;
    } else if (choice == 2) {
        result = 2 * pi * radius;
        
        cout << "Circumference = " << result << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
