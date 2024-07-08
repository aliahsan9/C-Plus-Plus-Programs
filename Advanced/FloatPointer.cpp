#include<iostream>
using namespace std;
int main(){
    float arr[5];
    cout<<"Enter five floating values:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    float *ptr;
    ptr=&arr[5];
    cout<<"The values in reverse order are:";
    for(int i=0;i<5;i++){
        cout<<*ptr--<<" ";
        }
    return 0;
}