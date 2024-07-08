#include<iostream>
using namespace std;
int main(){
    int numerator, denominator,result;
    cout<<"Enter the numerator: ";
    cin>>numerator;
    cout<<"Enter the denominator: ";
    cin>>denominator;
    try{
        if(denominator==0){
       throw "division by zero error!";
        }
        result=numerator/denominator;
        cout<<"Result: "<<result<<endl;
    }
    catch(const char*msg){
cout<<"Exception caught: "<<msg<<endl;
    }
    return 0;
}