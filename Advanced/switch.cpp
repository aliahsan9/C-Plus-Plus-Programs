#include<iostream>
using namespace std;
int main(){
    char value;
    int  num1, num2;

    cout<<"enter a first number:";
    cin>>num1;

    cout<<"what you want:";
    cin>>value;
    cout<<"enter a second number:";
    cin>>num2;

switch (value){

    case'+':
    cout<<"addition:"<<num1+num2;
break;
case'-':
cout<<"subtraction:"<<num1-num2;
break;

case'/':
cout<<"division:"<<num1/num2;
break;

default:
cout<<"invalid choice:"<<endl;


}

return 0;
}