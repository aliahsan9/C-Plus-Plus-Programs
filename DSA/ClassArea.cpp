#include<iostream>
using namespace std;
class Measure{
    private:
    float radius;
    public:

    void getinput(){
        cout<<"Enter the Radius of the Circle: ";
        cin>>radius;
    }
    void display(){
        cout<<"Area of Circle: "<<3.14159*radius*radius<<endl;
        cout<<"Circumference of Circle: "<<2*3.14159*radius<<endl;
    }
};
int main(){
    Measure obj;
    obj.getinput();
    obj.display();
    return 0;
}