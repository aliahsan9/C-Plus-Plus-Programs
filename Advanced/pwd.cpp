#include<iostream>
using namespace std;
int main(){
 int pwd=8751;
 int mypwd;
 cout<<"enter your pwd"<<endl;

 while(pwd>0)
 {
    if( pwd!=mypwd)
    {
        cout<<"enter your pwd"<<endl;
        cin>>mypwd;


    }else{
        cout<<"unlocked !!"<<endl;
           break;
    }
 
 }
    return 0;
}