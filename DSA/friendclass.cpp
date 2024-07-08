#include<iostream>
using namespace std;

class A{
    private:
    int a=10, b=20;
    public:

void show(){
    cout<<a<<" "<<b<<endl;

}
friend class B;

};
class B{
    public:
    void add(A r){
        int add(r.a+r.b);

        cout<<"sum:"<<add<<endl;

    }
    
};

int main(){
    A obj1;
    B obj2;
    obj1.show();
    obj2. add(obj1);

}