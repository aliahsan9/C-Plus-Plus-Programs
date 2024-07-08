#include<iostream>
using namespace std;
int main(){
    char value;
    cout<<"enter the value:";
    cin>>value;
    switch (value){
        case'a':
        cout<<"You Entered Vowel!";
        break;
        case'e':
         cout<<"You Entered Vowel!";
        break;
        case'i':
         cout<<"You Entered Vowel!";
         case'o':
         cout<<"You Entered Vowel!";
        break;
        case'u':
         cout<<"You Entered Vowel!";
        break;
        default:
        cout<<"Its a consonant alphabet."<<endl;



    }
    return 0;
}