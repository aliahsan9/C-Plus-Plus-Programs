#include<iostream>
using namespace std;
int queue[5],n=5,x,front=-1,rear=-1;

void insert(){
    if(rear==n-1){
        cout<<"queue is full.";

    }else{
        if(front ==-1){
            front=0;
        }
        cout<<"enter the elemnet to insert in queue:";
        cin>>x;
        rear++;
        queue[rear]=x;

    }
}
int main(){
    insert();
    insert();
    insert();
    insert();
    insert(); 
    insert();



    return 0; 
}















