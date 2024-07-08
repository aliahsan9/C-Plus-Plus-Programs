#include<iostream>
using namespace std;
class base1{
    private:
    int a,b,c;
    public:

    void getinput(){
        cout<<"enter two numbers:";
        cin>>a>>b;

    }
    void show1(){
        c=a+b;
        cout<<"sum:"<<a+b<<endl;
    }
};
class base2{
    private:
    int a,b,c;
    public:

    void getdata(){
        cout<<"enter two numbers:";
        cin>>a>>b;

    }

    void show2(){
        c=a-b;
        cout<<"subtraction:"<<a-b<<endl;


    }
};

class derive:public base1, public base2{
private:

int a,b,c;

public:

void input(){
    cout<<"enter two numbers:";
    cin>>a>>b;

}
void show3(){

    c=a*b;
cout<<"multiplication:"<<a*b<<endl;


}
};


int main(){

    base1 obj1;
    obj1. getinput();
    obj1.show1();

base2 obj2;
obj2.getdata();

obj2.show2();

derive obj3;
obj3.input();

obj3.show3();


return 0;

}