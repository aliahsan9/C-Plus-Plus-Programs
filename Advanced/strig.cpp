
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter a string:";
    cin>>name;

    string*ptr=&name;
    cout<<"you entered:"<<*ptr;

    return 0;
}