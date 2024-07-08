#include<iostream>
using namespace std;
int firstocc( int arr[],int n,int i,int key ){
    if(i==0){
        return -1;
    }if(arr[i]=key){
        return i;
    }return firstocc(arr,n,i+1,key);
}int main(){
    int arr[]={4,2,1,2,5,2,7}
    cout<<firstocc(arr,0,2,7)<<endl;
    return 0;
}
