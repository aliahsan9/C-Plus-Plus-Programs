#include<iostream>
using namespace std;
 
 int factorial(int n){
    if(n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);

 }

 double calculatesum(int n){
    double sum=0;
    for(int i=1;i<=n;i++){

        sum+=1/factorial(i);

    }
    return sum;
    

 }
 int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    double result=calculatesum(n);

    cout<<"sum of the series 1+ 1/1!...1/"<<n<<"! is:"<<result<<endl;

    return 0;
 }