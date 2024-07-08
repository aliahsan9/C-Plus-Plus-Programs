#include<iostream>
using namespace std;
 
 class A{
    public:
    int a,b;

    void getinput(){
        cout<<"enter two numbers:";
        cin>>a>>b;

    }

    void calculateandprintsquares (){

        cout<<"the squares of two numbers are "<<a*a<<" and "<<b*b<<endl;

    }
 };

 A obj;

 int main(){

    obj.getinput();

    obj.calculateandprintsquares();

    return 0;
 }