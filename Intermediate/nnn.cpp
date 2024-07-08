#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter a positive integer value for n: ";
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }
    
    cout << "The sum of squares of integers from 1 to " << n << " is: " << sum << endl;
    
    return 0;
}
