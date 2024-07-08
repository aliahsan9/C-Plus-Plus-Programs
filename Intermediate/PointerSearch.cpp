#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str="Hello world!";
    char ch;
    cout<<"Enter the character you want to found in a string:";
    cin>>ch;
    bool found =false;
    for (int i=0;i<str.length();i++){
     if(str[i] == ch){
        found = true;
           break;
     }
    }
    if(found){
        cout<<"The character '"<<ch<<"' is present in the string."<<endl;

    }
    else{
        cout<<"The character '"<<ch<<"' is not present in the string."<<endl;
    }
    return 0;       
} 