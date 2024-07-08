#include <iostream>
using namespace std;

int main() {
    int arr[2][4];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "enter value for row " << i + 1 << " column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "the array is:\n";

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
