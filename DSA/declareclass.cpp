#include<iostream>
using namespace std;

class myclass{
    private:
    int data;
    public:


void in(){

    cout<<"enter an integer:";
    cin>>data;

}

void out(){

    cout<<"The value is:"<<data<<endl;

}
};
int main(){
    myclass obj;

    obj.in();
    obj.out();

    return 0;
}