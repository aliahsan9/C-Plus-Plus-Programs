#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name:";
    cin>>name;
    do{
        cout<<name;
        break;
    }

    while(name!="ali");
    return 0;
}