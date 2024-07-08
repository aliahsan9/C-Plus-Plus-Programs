#include <iostream>
using namespace std;

int main() {
    int values[5];
    int sum = 0;
    float average = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a value " << i + 1 << " : ";
        cin >> values[i];
        sum += values[i];
    }

    average = static_cast<float>(sum) / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
