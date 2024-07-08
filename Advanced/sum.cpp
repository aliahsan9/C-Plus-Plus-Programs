#include <iostream>
using namespace std;

int main() {
    int sign=1;
    for (int i = 1; i <= 40; i += 3) {
        cout << i* sign << " ";
    }
    cout << endl;

    return 0;
}
