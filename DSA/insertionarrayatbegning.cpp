#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the element at the begining of an array:";
    cin>>x;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];

    }

    arr[0]=x;
    n++;
    cout<<"The all array elements are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}