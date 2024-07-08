#include <iostream>
using namespace std;

int main() {
    int count = 1; 
    int sum = 0;

    while (count <= 5) {
        cout << "Number " << count << endl;
        sum += count; 
        count++;      
    }

    cout << "Sum of the first five numbers is: " << sum << endl;

    return 0;
}