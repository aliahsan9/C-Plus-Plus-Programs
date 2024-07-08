#include<iostream>
using namespace std;

class base{
    private:
    int a, b;
    public:

    void getinput(){
        cout<<"enter two numbers:";
        cin>>a>>b;

    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
class derive :public base{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<"enter two numbers:";
        cin>>x>>y;


    }
    void disp(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    base obj1;
    obj1. getinput();
    obj1.show();

    derive obj2;
    obj2. getdata();
    obj2.disp();

    return 0;
}