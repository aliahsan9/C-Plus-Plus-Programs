#include<iostream>
using namespace std;
int main(){
    int* ptr=new int;

    cout<<"enter an integer:";
    cin>>*ptr;

    cout<<"the value entered is:"<<*ptr<<endl;

    delete ptr;

    return 0;                                     
}
