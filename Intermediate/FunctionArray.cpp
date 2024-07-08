#include<iostream>
using namespace std;
void displaySquare(int num){
    cout<<"Number: "<<num<<"Square: "<<num*num<<endl;
}
int main(){
    int arr[5];
    cout<<"Enter the elements in an arary:"<<endl;
    for(int i=0;i<5;++i){
        cin>>arr[i];

    }
    for(int i=0;i<5;++i){
        displaySquare(arr[i]);  
    }
    return 0;
}