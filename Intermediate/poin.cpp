
#include<iostream>
using namespace std;
int main(){
    int numbers[5];
    int*ptr;

    cout<<"enter five integers:";
    for(int i=0;i<5;i++){
        cin>>numbers[i];

    }
    cout<<"displaying numbers using pointers:";
    ptr=numbers;
    for(int i=0;i<5;i++){
        cout<<"number"<<i+1<<" : "<<*ptr<<endl;
        ptr++;
    }

    return 0;

}