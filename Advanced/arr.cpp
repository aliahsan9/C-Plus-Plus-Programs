#include<iostream>
using namespace std;

int displaysquare(int num){
 cout<<"number:"<<num<<"square:"<<num*num<<endl;

}

int main(){
   int arr[5];
   cout<<"enter five integers:";
   for(int i=0;i<5;i++){
      cin>>arr[i];


   }

   cout<<"values and their quares :"<<endl;
   for(int i=0;i<5;i++){
      displaysquare(arr[i]);

   }

   return 0;
   
}