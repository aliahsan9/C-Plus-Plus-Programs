#include<iostream>
using namespace std;

int main(){
    int length;

    cout<<"enter a length:";
    cin>>length;

    int* arr=new int[length];

cout<<"enter"<<length<<" values for the array:"<<endl;

for(int i=0;i<length;++i){

    cout<<"enter value"<<i+1<<endl;

    cin>>arr[i];
}

cout<<"values in the array:"<<endl;

for(int i=0;i<length;++i){

    cout<<arr[i]<<" ";




}
cout<<endl;
delete[] arr;


return 0;
}