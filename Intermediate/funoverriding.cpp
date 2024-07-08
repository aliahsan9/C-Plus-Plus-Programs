#include<iostream>
using namespace std;
class A{
    public:

     virtual void fun(){
        cout<<"ALI"<<endl;
         
    }
};
class B: public A{
     void show(){
        cout<<"AHSAN"<<endl;

    }
};
int main(){
    A *ptr; 
    B obj ;
ptr=&obj;

ptr->fun();
return 0;
}