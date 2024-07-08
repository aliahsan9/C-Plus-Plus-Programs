#include<iostream>
using namespace std;

template<typename T>
T findmin(T arr[],int size){
    T minval=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<minval){
            minval=arr[i];
        }
    }
    return minval;
}

int main(){

    int intarr[]={2,3,4,5,6,};
    int intsize=sizeof(intarr)/sizeof(intarr[0]);

    cout<<"the mininmum integer value is:"<<findmin(intarr, intsize)<<endl;

    double doublearr[]={3.4,5.6,6.7,8.9};
    int doublesize=sizeof(doublearr)/sizeof(doublearr[0]);

    cout<<"the minimimum double value is:"<<findmin (doublearr, doublesize)<<endl;

    return 0;
}