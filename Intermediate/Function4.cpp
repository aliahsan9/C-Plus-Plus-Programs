#include<iostream>
using namespace std;
void say(int n){
    cout<<"Number is:"<<endl;
}
int main(){
    int num;
    cout<<"Enter your number:"<<endl;
    say(num);
    cin>>num;
    int p=num-1;
   int s=num+1;
   cout<<"Successor of Number is: "<<s<<endl;
   cout<<"Precessor of Number is: "<<p<<endl;

    return 0;
}