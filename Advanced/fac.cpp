#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }else

    return  n* factorial(n-1);

}
int main(){
int num;

cout<<"enter a positive integer:";
cin>>num;

if(num<0){

    cout<<"error: cannot defined?"<<endl;

}else{

    cout<<"the factorial of "<<num<<" is "<<factorial(num)<<endl;

}

return 0;
}