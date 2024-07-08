#include <iostream>
using namespace std;

int main() {
    int pwd = 8751;
    int mypwd;

    // Prompt the user to enter the password initially
    cout << "Enter your password: ";
    cin >> mypwd;

    // Loop until the correct password is entered
    while (true) {
        if (mypwd != pwd) {
            cout << "Incorrect password. Enter your password again: ";
            cin >> mypwd;
        } else {
            cout << "Unlocked!" << endl;
            break;  // Exit the loop when the correct password is entered
        }
    }

    return 0;
}
