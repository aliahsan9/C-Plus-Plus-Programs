#include<iostream>
using namespace std;
int countEvenNumbers(int arr[], int size){
    int count=0;
    for(int i=0;i<size;++i){
        if(arr[i]%2==0){
            ++count;
        }
    }
    return count;
}
int main(){
    int arr[5];
    cout<<"Enter the elements in an array: ";
    for(int i=0;i<5;++i){
        cin>>arr[i];
    }
    int evencount=countEvenNumbers(arr, 5);
    cout<<"Even Numbers in an Array are: "<<evencount<<endl;
    return 0;
}
