#include<iostream>
using namespace std;
class base{
    private:
    int a;
    public:

    void getinput(){
        cout<<"enter a number:";
        cin>>a;
    }
    void show(){
        cout<<a<<endl;

    }
};
class derive1: public base{

    private:
    int b;
    public:
  
    void getdata(){
        cout<<"enter a number:";
        cin>>b;

    }
    void disp(){
        cout<<b<<endl;

    }
};
class derive2 : public derive1{
    private:
    int c;
    public:
void input(){
    cout<<"enter a number:";
    cin>>c;

}

void output(){
    cout<<c<<endl;


}

};

int main(){

    base obj1;
    obj1.getinput();

    obj1.show();
    derive1 obj2;

    obj2.getdata();
    obj2.disp();

    derive2 obj3;
    obj3. input();
    obj3.output();

    return 0;

}