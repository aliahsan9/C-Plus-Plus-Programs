#include<iostream>
using namespace std;

class A{

    private:
    int a,b;
    public:

    void show(){

        cout<<"enter two numbers:";
        cin>>a>>b;

        cout<<a<<" "<<b;

    }
};

void fun(){
A obj;
obj.show();

}
int main(){

    fun();
    cin.get();

    return 0;
}