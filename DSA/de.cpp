#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int degrees = 0;
    const double PI = 3.14159;

    cout << "Degree\tRadian\n";
    cout << "--------------\n";

    while (degrees <= 360) {
        double radians = degrees * (PI / 180);
        cout << degrees << "\t" << fixed << setprecision(4) << radians << "\n";
        degrees += 10;
    }

    return 0;
}
