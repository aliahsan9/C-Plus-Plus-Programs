#include<iostream>
using namespace std;
class A{

    public:
    virtual void show()=0;
    void disp(){

        cout<<"i am a base class!";

    }
};

class B: public A{
    public:
    void show(){

        cout<<"i am a derived class!";


    }
};
int main(){
    B obj;
    obj.disp();
    return 0;
}