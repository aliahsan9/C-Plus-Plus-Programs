#include<iostream>
using namespace std;
int main(){
    int number;
    int *ptr;

    cout<<"enter a number:";
    cin>>number;
    ptr=&number;

    cout<<"value of number:"<<number<<endl;
    cout<<"address of number:"<<ptr<<endl;
    
    return 0;


}