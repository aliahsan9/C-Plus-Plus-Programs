#include<iostream>
using namespace std;

int main() {
    int arr[10], n, x;

    cout << "Enter the size of an array: ";
    cin >> n;
    
    if (n > 10) {
        cout << "Array size should not exceed 10." << endl;
        return 1;
    }
    
    cout << "Enter the elements in an array: ";
    for (int i = 0; i < n; i++) { // Corrected loop condition
        cin >> arr[i];
    }

    cout << "Enter the element to search in an array: ";
    cin >> x;

    int i; // Declare i outside the loop to use it after the loop
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at index: " << i << endl;
            break;
        }
    }
    
    if (i == n) { // Check if the element was not found
        cout << "Element not found in an array!" << endl;
    }

    return 0;
}
