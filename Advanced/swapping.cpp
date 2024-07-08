#include<iostream>

using namespace std;

int  swapintegers(int& a, int& b){
int temp=a;
a=b;
b=temp;
}
int main(){
    int num1,num2;
    cout<<"enter two integers:";
    cin>>num1>>num2;

    cout<<"values without swapping:"<<num1<<" "<<num2 <<endl;

    swapintegers (num1,num2);

    

        cout<<"values after swapping:"<<num1<<" "<<num2<<endl;


    

    return 0;
}