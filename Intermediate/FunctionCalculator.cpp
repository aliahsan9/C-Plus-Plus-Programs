#include<iostream>
using namespace std;
void cal(int num1 , int num2 , char op)
{
    cout<<"Calculator!"<<endl;

}
int main(){
     int num1 , num2;
    char op;
     void cal(int num1, int num2, char op);
     cout<<"CALCULATOR!"<<endl;
     cout<<"Enter a First Number:"<<endl;
     cin>>num1;
     cout<<"Enter an Operator:"<<endl;
     cin>>op;
     cout<<"Enter a Second Number:"<<endl;
     cin>>num2;
    switch (op)
    {
    case '+':
        cout<<"Addition: "<<num1+num2<<endl;
        break;
    case '-':
    cout<<"Subtraction: "<<num1-num2<<endl;
    break;
    case '*':
    cout<<"Multiplication: "<<num1*num2<<endl;
    break;
     case '/':
     cout<<"Division: "<<num1/num2<<endl;
     break;
     case '%':
     cout<<"Modulus: "<<num1%num2<<endl;
     break;
    default:
        break;
    }
    return 0;

}