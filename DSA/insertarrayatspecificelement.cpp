#include<iostream>
using namespace std;
int main(){
    int arr[10],x,n,pos;

    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<"enter the place of insertion an element:";
    cin>>pos;
    cout<<"enter the element to insert in an array:";
    cin>>x;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];

    }
    arr[pos]=x;
    n++;
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
    return 0;
}