#include<iostream>
using namespace std;
int main(){
    int arr[10],num;
    cout<<"enter the size of an array:";cin>>num;
    cout<<"enter the array elements:";
    for(int i=0;i<num;i++){
cin>>arr[i];

    }



// if(arr[num]%2==0){

// cout<<"Even numbers in an array are:"<<num;

//     }else{
//         cout<<"No even numbers in an array!";

//     }
//     return 0;
    for (int i = 0; i < num; i++)
    {
          if(arr[i]%2==0){
        cout<<"Even numbers in an array are:"<<arr[i]<<endl;
    }
    else{
     cout<<"No even numbers in an array!"<<arr[i]<<endl;
    }}
    
return 0;
}