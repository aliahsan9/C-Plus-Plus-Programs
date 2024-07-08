#include<iostream>
using namespace std;
 int calculategcd(int num1,int num2){
    while (num2!=0){
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    return num1;

 }

 int main(){
    int num1,num2;
    cout<<"enter a first number:";
    cin>>num1;

    cout<<"enter a second number:";
    cin>>num2;
    int gcd=calculategcd(num1,num2);

    cout<<" the greatest gcd of "<<num1<<" and "<<num2<<" is "<<" = "<<gcd<<endl;

    return 0;
 }