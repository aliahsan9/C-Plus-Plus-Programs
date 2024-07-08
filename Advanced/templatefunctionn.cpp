#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return a+b;

}
int main(){
    int intresult=add(3,4);
    double doubleresult=add(3.5,5.5);

    cout<<"sum of integers is:"<<intresult<<endl;

    cout<<"sum of doubles is:"<<doubleresult<<endl;

    return 0;
}
