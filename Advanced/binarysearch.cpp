#include<iostream>
using namespace std;

int arr[10], n, x;

int binarySearch(int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number to search in the array: ";
    cin >> x;

    int result = binarySearch(0, n - 1);
    if (result == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
