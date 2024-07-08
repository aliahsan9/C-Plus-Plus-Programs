#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    cout<<"Enter the five integers in an array:";
    for(int i=0;i<5;i++){
    cin>>arr[i];
    }
      int *ptr;
      ptr=arr;
    for(int i=0;i<5;i++){
    cout<<*ptr++<<" ";
    }
    return 0;
}