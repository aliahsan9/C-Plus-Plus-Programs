#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter the string letters:";
    cin.get(name,20);
    char *ptr;
    ptr=name;
    cout<<"You entered a name:"<<ptr;
    return 0;
}   