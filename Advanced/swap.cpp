
#include<iostream>
using namespace std;

void swapIntegers(int& a, int& b){

int temp=a;

  a=b;
b=temp;

}
int main(){
int num1,num2;
cout<<"enter a first num:";

cin>>num1;
cout<<"enter a second num:";
cin>>num2;

cout<<"valuesbefore swapping:"<<num1<<" "<<num2<<endl;
swapIntegers(num1,num2);
  cout<<"values after swapping:"<<num1<<" "<<num2<<endl;



return 0;
}

