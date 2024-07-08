#include<iostream>
using namespace std;
int main(){
    int arr[10], n, x;
    cout<<"enter the size of an arary:";
    cin>>n;
   cout<<"enter the array elements:";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"enter the element in the beginning:";
   cin>>x;
for(int i=n;i>0;i--){
     arr[i]=arr[i-1];
}
arr[0]=x;//0  means first index of an arary
n++;
cout<<"The array elements after insertion are:"<<endl;

   for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
   }
   return 0;

}