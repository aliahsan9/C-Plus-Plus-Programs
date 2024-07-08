#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string mystring="751";
    mystring.push_back('A');
    cout<<"Modified value after adding value at last ="<<mystring<<endl;
    mystring.pop_back();
    cout<<"Modified value after removing last value ="<<mystring<<endl;
    return 0;
}