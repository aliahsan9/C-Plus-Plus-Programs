#include<iostream>
using namespace std;

void displaytable(int num){

    for(int i=0;i<=10;++i){

        cout<<num<<" x "<<i<<" = "<<num*i<<endl;

    }
}
int main(){

    int num;
    cout<<"enter a number:";

    cin>>num;

    displaytable(num);

    return 0;
}