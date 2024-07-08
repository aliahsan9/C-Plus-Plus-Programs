#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter the size of arrays:";
    cin>>n;
    cout<<"enetr the elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<"enter the element at the end of an array:";
    cin>>x;
    {
        arr[n]=x;
        n++;
 
    } 

    cout<<"The array elements are:"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}