#include<iostream>
using namespace std;
int main(){
    int num;

cout<<"enter a number:";
cin>>num;
int lowest =9;
int highest =0;
for(int temp=num;temp>0;temp/=10){
int digit=temp%10;

lowest=min(lowest ,digit);
highest=max(highest,digit);




}
cout<<"highest digit:"<<highest<<endl;
cout<<"lowest digit:"<<lowest<<endl;


    return 0;
}