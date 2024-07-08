#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the index of an element to delete:";
    cin>>x;

    if(x<0 || x>=n){
        cout<<"invalid index!";
  
return 1;     
    } 

       for(int i=x;i<n-1;i++){
arr[i]=arr[i+1];
       }
       n--;

                                  

    cout<<"The remaining elements are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}