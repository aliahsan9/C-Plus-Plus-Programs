#include<iostream>
using namespace std;
int main(){
    int arr[10],n,temp;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;               
}