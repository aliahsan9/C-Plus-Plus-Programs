#include<iostream>
using namespace std;
int main(){
    int num;
    int i=10;
    cout<<"enter a number:";
    cin>>num;

    if(num<=10){
        cout<<num<<"*"<<i<<" = "<<num*i<<endl;

    }else
    cout<<"invalid input?"<<endl;

    return 0;

}