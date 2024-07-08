
#include<iostream>
using namespace std;

void calculate(int num1,int num2,char op)
{
    switch (op){

        case '+':
        cout<<"result:"<<num1+num2<<endl;
        break;
        case '-':
        cout<<"result:"<<num1-num2<<endl;
        break;
        case '*':
        cout<<"result:"<<num1*num2<<endl;
        break;
        case '/':
        if(num2 !=0)
        cout<<"result:"<<num1/num2<<endl;
        
else 
cout<<"error input, please reenter an input?"<<endl;
break;
default:
cout<<"invalid operator?"<<endl;
    }
}
int main(){
    int num1, num2;

    char op;
    cout<<"enter a number:";
    cin>>num1>>num2;

    cout<<"enter an operator(+, -, /, *):";

    cin>>op;

    calculate(num1,num2,op);

    return 0;
}