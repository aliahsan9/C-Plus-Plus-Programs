#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x,i;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    n--;
    cout<<"elements after deleting last elenment are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter the element for inserting at the end of an array:";
    cin>>x;
    arr[n]=x;
    n++;

    cout<<"The elements after inserting new eleemnt at the end are:"<<endl;
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;

    }

    return 0;
}
