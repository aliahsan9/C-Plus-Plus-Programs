#include<iostream>
using namespace std;
int maximum(int num1,int num2)
{
    return (num1>num2)?num1:num2;

}


int main(){

    int num1,num2;
    cout<<"enter two numbers:";

cin>>num1>>num2;

int maxnum=max(num1,num2);

cout<<"the maximum number is:"<<maxnum<<endl;


return 0;
}