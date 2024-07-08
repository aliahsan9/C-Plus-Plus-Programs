#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];

    cout<<"enter a string:";
    cin.getline(str,100);

    int length=strlen(str);
    
    cout<<"number of characters:"<<length<<endl;

    return 0;
}