#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer:";
    cin>>num;
    int *ptr=&num;
    cout<<"You entered an integer:"<<num<<endl;
    cout<<"The address of an integer is:"<<&num;
    return 0;
}