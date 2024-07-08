
#include<iostream>
using namespace std;
int arr[5]={9,7,4,2,1},n=5;

void insertsort(){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]> key){

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertsort();
    cout<<"elements after sorting:"<<endl;

    print();
    return 0;
}