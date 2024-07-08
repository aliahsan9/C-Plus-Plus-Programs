#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"input an year:";
    cin>>year;
    if(year%4==0){

        cout<<"it is a leap year"<<endl;
    }else
    cout<<"not a leap year"<<endl;
    return 0;
}