#include<iostream>
using namespace std;
int arr[5]={3,2,4,5,1},n=5;

void bubblesort(){
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           swap=1;
            }
        }
        if (swap==0){
            break;                                  
        }                     
    }  
}
void print(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }  
}
int main(){

    cout<<"elements before sorting :"<<endl;
    print();
bubblesort();

cout<<"elements after sorting:"<<endl;

print();

return 0;
}