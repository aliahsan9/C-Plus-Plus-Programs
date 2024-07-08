#include <iostream>
using namespace std;

class Base {
protected:
    int protectedVar;

public:
    Base(int val) : protectedVar(val) {}

    void showProtectedVar() {
        cout << "Base protectedVar: " << protectedVar << endl;
    }
};

class Derived : public Base {
public:
    Derived(int val) : Base(val) {}

    void changeProtectedVar(int newVal) {
        protectedVar = newVal;
    }

    void showProtectedVar() {
        cout << "Derived protectedVar: " << protectedVar << endl;
    }
};

int main() {
    Base baseObj(10);
    baseObj.showProtectedVar();

    Derived derivedObj(20);
    derivedObj.showProtectedVar();
    derivedObj.changeProtectedVar(30);
    derivedObj.showProtectedVar();
       

    return 0;
}
