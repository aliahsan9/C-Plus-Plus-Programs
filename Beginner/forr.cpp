#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"multiplicatiion table of:"<<num<<endl;

    for(int i=0;i<=10;i++){

        cout<<num<<"*"<<i<<" = "<<num*i<<endl;


    }

    return 0;
}
