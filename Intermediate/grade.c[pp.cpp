#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"enter your sc ore:";
    cin>>score;
    if(score>=90){
        cout<<"your grade is a"<<endl;

    }
    if(score>=80){
        cout<<"your grade is b"<<endl;

    }
    if(score>=70){
        cout<<"your grade is c"<<endl;
    }
    if(score>=60){
        cout<<"your grade is d"<<endl;

    }else
    cout<<"your grade is f"<<endl;

    return 0;
}