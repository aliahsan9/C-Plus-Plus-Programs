#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter the size of an arary:";
    cin>>n;
cout<<"enter the elements in an array:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the new element at the end";
cin>>x;
arr[n]=x;
++n;
cout<<"Now elemnets are:"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}
return 0;
}