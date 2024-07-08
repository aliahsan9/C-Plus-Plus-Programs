#include <iostream>
using namespace std;

class Counter {
private:
    static int objectCount; // Static data member to count objects

public:
    // Constructor increments objectCount whenever an object is created
    Counter() {
        objectCount++;
    }

    // Static member function to get the current object count
    static int getObjectCount() {
        return objectCount;
    }
};

// Definition and initialization of the static data member
int Counter::objectCount = 0;

int main() {
    // Display object count before any object is created
    cout << "Number of objects created so far: " << Counter::getObjectCount() << endl;

    // Creating objects
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Display object count after creating objects
    cout << "Number of objects created so far: " << Counter::getObjectCount() << endl;

    return 0;
}
