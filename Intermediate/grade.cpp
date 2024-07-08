#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"enter your score:";
    cin>>score;
    if(score>=90){
        cout<<"your grade is a";

    }else
    if(score>=80){
        cout<<"your grade is b";

    }else
    if(score>=70){
        cout<<"your grade is c";
        
    }else
    if(score>=60){
        cout<<"your grade is d";

    }else
    cout<<"your grade is f";

    return 0;
}