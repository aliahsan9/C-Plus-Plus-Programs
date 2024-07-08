#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int numerator, denominator, result;

    cout<<"enter a numerator:";
    cin>>numerator;

    cout<<"enter a denominator:";
    cin>>denominator;

    try{
        if(denominator ==0){
            throw"division error!";

        }
        result=numerator/denominator;

        cout<<"result of division is"<<result<<endl;
    }

    catch(const char* messages)
    {

    cout<<"exceptioon caught:"<<messages<<endl;
    }

    return 0;
}