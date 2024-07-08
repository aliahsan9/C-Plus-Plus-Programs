#include<iostream>
using namespace std;

class A {
private:
    int a;
public:
    void getinput() {
        cout << "enter a number: ";
        cin >> a;
    }
    void show1() {
        cout << a << endl;
    }
};

class B : virtual public A { 
private:
    int b;
public:
    void getdata() {
        cout << "enter a number: ";
        cin >> b;
    }
    void show2() {
        cout << b << endl;
    }
};

class C : virtual public A, public B {
private:
    int x;
public:
    void input() {
        cout << "enter a number: ";
        cin >> x;
    }
    void show3() {
        cout << x << endl;
    }
};

class D : public B, public C {
    
};

int main() {
    A obj1;
    obj1.getinput();
    obj1.show1();

    B obj2;
    obj2.getdata();
    obj2.show2();
    
    C obj3;
    obj3.input();
    obj3.show3();

    D obj4;
    obj4.getinput(); 
    obj4.show1();

    return 0;
}
