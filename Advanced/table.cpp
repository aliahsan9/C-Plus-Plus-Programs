#include<iostream>
using namespace std;
int main(){
    int num;
cout<<"enter a num:";
cin>>num;
int i=1;
cout<<"table of "<<num<<":"<<endl;

while(i<=10){

    cout<<num<<"*"<<i<<" = "<<num*i<<endl;
    i++;

}
return 0;
}