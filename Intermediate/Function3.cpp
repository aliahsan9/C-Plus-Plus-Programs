#include<iostream>
using namespace std;
void say(int num){
    cout<<"Table of "<<num<<":"<<endl;
}
int main(){
    int num;
    cout<<"Enter a Number for Table:";
    cin>>num;
    say(num);
    for(int i=1;i<=10;i++){
cout<<num<<"*"<<i<<" = "<<num*i<<endl;
    }
    return 0;

}