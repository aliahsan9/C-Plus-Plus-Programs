#include<iostream>
using namespace std;

bool iseven(int num){
    return num%2==0;

}
bool isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i=0;i*i<=num;++i){

        if(num%i==0){
            return 0;
        }
    }
    return false;
}
int main(){
    int num;

    cout<<"enter a number:";
    cin>>num;

    if (iseven(num)){
        cout<<"the numbe is even."<<endl;
    }else{

        cout<<"the number is odd."<<endl;

    }

    if (isprime(num)){
        cout<<"the number is prime."<<endl;
        cout<<"the number is non prime."<<endl;

        
    }
    return 0;
}