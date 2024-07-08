#include <iostream>
using namespace std;
int queue[5],n=5,front=-1,rear=-1;

void enqueue(int value){
    if(rear==n-1){
cout<<"queue is empty!";

    }else{
        if(front==-1)
        front=0;
        rear++;
        queue [rear]=value;
        cout<<"inserted!"<<endl;


    }
}
void dequeue(){
    if(front ==-1){
        cout<<"queue is empty!"<<endl;

    }
    else{
        cout<<"element deleted from queue is:"<<queue[front]<<endl;
        if(front ==rear){
            front =-1;
            rear=-1;

        }else{
            front ++;

        }
    }
}
int main(){
     enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}