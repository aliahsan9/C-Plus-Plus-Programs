
#include<iostream>
using namespace std;
int main(){
    string text="hello";
    char searchchar;
    cout<<"enter a character to search in the string:";
    cin>>searchchar;

    if(text.find(searchchar)!=string::npos){

        cout<<"character'"<<searchchar<<"'found in the string."<<endl;
        
    }else{

        cout<<"character'"<<searchchar<<"'not found in the string."<<endl;


    }

    return 0;
}
