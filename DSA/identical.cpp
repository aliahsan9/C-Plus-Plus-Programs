
#include<iostream>
#include<cstring>
using namespace std;

bool areArraysidentical(const char arr1[],const char arr2[],int size1,int size2){

    if(size1 !=size2){
        return false;
    }

    for(int i=0;i<size1;++i){
        if(arr1[i] !=arr2[i]){

            return false;

        }
    }
    return true;
    

}
int main(){
    char arr1[]="ali";
    char arr2[]="ali";
    char arr3[]="ali";

    cout<<"arr1 and arr2 are"<<(areArraysidentical(arr1,arr2,strlen(arr1), strlen(arr2))?"identical":"not identical")<<endl;
    cout<<"arr1 and arr2 are"<<(areArraysidentical(arr1,arr3,strlen(arr1), strlen(arr3))?"identical":"not identical")<<endl;

    return 0;
}