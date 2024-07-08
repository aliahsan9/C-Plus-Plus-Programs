#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p = &a;
    int *q=&a;
    cout<<*p<<endl;
    cout<<&a<<endl;
     return 0;
}
