#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
    return 1;}
    else{
    return n*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter any Integer: ";
    cin>>n;
    cout<<"Factorial of an Integer is: "<<fact(n)<<endl;
    return 0;
}