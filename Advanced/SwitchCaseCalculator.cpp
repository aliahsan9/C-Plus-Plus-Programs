#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    char op;
    cout<<"enter a first number:";
    cin>>num1;
    cout<<"enter an operator:";
    cin>>op;
    cout<<"Enter a second number:";
    cin>>num2;
switch (op){
    case'+':
    cout<<"Sum"<<" ="<<num1+num2<<endl;
    break;
      case'-':
    cout<<"Subtraction"<<" ="<<num1-num2<<endl;
    break;
      case'*':
    cout<<"Multiplication"<<" ="<<num1*num2<<endl;
    break;
      case'/':
    cout<<"Division"<<" ="<<num1/num2<<endl;
    break;
      case'%':
    cout<<"Modulus"<<" ="<<num1%num2<<endl;
    break;
    default:
    cout<<"Invalid choice!"<<endl;
}
return 0;
}