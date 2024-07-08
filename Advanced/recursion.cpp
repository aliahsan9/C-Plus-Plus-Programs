#include<iostream>
using namespace std;
int fact (int num){
    if(num==0){
        //we know the factorial of 0 is 1
        return 1;

    }
    else{
        //factorial logic
        return num* fact (num-1);

    }
}
int main(){
    int num;
    //enter a number for taking factorial of it 
    cout<<"Enter the number for factorial:"; 
    cin>>num;
    int r=fact(num);
    cout<<"Factorial of "<<num<<" is ="<<r<<endl;


    return 0;
    
}