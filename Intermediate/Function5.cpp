#include<iostream>
using namespace std;
void say(int num){
cout<<"Your Entered Number is:"<<endl;
}      
bool isprime(int num){
    if(num<=1)
    return false;
    for(int i=2;i<=num/2;++i){
        if(num%i==0)
        return false;
    }
    return true;
}
int main(){
    int num, i;
    cout<<"Enter any Number: ";
    cin>>num;
    say(num);
    if(num%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    if(isprime(num)){
        cout<<"prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;

    }
    return 0;
}