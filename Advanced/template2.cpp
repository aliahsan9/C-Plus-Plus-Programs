#include<iostream>
using namespace std;
template<typename T>
T getvalue( T a){
    return a;

}
int main(){

    cout<<"ente the value:";
    int value;
    cin>>value;

    int val=getvalue(value);

    cout<<"The value entered is:"<<value<<endl;
    
return 0;
}
