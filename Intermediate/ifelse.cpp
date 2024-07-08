#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    if(a==b*b){
        cout<<"The number one is the perfect square of number two."<<endl;

    }else{
        cout<<"Not perfect square!"<<endl;
    }
    return 0;
}