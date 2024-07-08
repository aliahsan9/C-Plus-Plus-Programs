#include<iostream>
using namespace std;

int main(){
    int length;

    cout<<"enter a length of the array:";

    cin>>length;

int* arr= new int[length];

cout<<"enter"<<length<<" values for the array: "<<endl;
for(int i=0;i<length;++i){

    cout<<"enter value "<<i+1<<": ";
    cout<< arr[i]<<" ";


}

cout<<"values in the arrays:"<<endl;
for(int i=0;i<length;++i){

    cout<<arr[i]<<" ";
}
cout<<endl;
delete[] arr;

return 0;
}