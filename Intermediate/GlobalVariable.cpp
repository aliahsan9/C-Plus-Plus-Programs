#include<iostream>
using namespace std;
int num;
void say(int num){
    cout<<"Value after function call: "<<num*2<<endl;
}
int main(){
     int num;
     cout<<"Enter an integer:";
     cin>>num;
     cout<<"Value before function call: "<<num<<endl;
     say(num);
     return 0;
}    
