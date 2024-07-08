#include<iostream>
using namespace std;
class base{
    private:
    int a,b;
    public:
    void getinput(){
        cout<<"enter two numbers:";
        cin>>a>>b;
    }

    void show1(){
        cout<<"sum:"<<a+b<<endl;


    }
};
class derive1:public base{
    private:
    int a;
    public:

    void getdata(){
        cout<<"enter a number:";
        cin>>a; 


    }
    void show2(){
        cout<<"number:"<<a<<endl;


    }
};
class derive2:public base{

private:
int x;
public:

void input(){
    cout<<"enter an integer:";
    cin>>x;
}
void show3(){
    cout<<"integer is:"<<x<<endl;

}
};
int main(){

    base obj1;
    obj1.getinput();
    obj1.show1();

    derive1 obj2;
    obj2.getdata();
    obj2.show2();

derive2 obj3;
obj3.input(); 
obj3.show3();
    return 0;

}