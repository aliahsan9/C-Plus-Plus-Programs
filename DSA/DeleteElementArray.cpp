#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter the size of an arary:";
    cin>>n;

    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the index of an element for deletion";
    cin>>x;
    {
        for(int i=x;i>n-1;i++)
    arr[i]=arr[i+1];

}
--n;
cout<<"Array after deletion of en element:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;

}

return 0;
}