#include<iostream>
using namespace std;
int num1=10 , num2=20;
void fun(){
    int sum=num1+num2;
    cout<<"Addition: "<<sum<<endl;
}
void fun(int a, int b){
    int sub=a-b;
    cout<<"Subtraction: "<<sub<<endl;
}
int main(){
    fun();
    fun(100,50);
    return 0;
}
