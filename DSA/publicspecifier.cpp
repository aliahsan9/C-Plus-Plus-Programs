#include <iostream>
using namespace std;

class Sample {
public:
    int publicVar;

    void showPublicVar() {
        cout << "Public variable: " << publicVar << endl;
    }

    void setPublicVar(int val) {
        publicVar = val;
    }
};

int main() {
    Sample obj;

    // Directly accessing and modifying the public variable
    obj.publicVar = 10;
    obj.showPublicVar();

    // Using public member function to modify the public variable
    obj.setPublicVar(20);
    obj.showPublicVar();

    return 0;
}
