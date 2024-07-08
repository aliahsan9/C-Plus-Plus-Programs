#include<iostream>
using namespace std;


class A{
    public:
    virtual void disp(){

        cout<<"its class A";

    }
};

class B: public A{

    public:
    void disp(){
        cout<<"its class B";

    }
};
int main(){

    A*ptr;
    A obj;
    ptr=&obj;

    ptr->disp();
    return 0;
}