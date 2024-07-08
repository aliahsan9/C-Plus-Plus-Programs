#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    void show(){
        cout<<"enter two numbers:"<<endl;
        
        cin>>a>>b;

        cout<<" the two numbers are "<<a<<" "<<b<<endl;

    }
};
A obj;

int main(){

    obj.show();

    obj.show();

    return 0;
}