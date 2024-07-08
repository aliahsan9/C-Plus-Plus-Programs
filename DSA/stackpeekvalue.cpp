#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;

int peek(){
    if(top==-1){
        cout<<"stack is empty!"<<endl;
        return -1;
    }else{
        return stack[top];
    }
}
int main(){
    stack[++top]=1;
    stack[++top]=2;
    stack[++top]=3;
    stack[++top]=4;
    stack[++top]=5;

    int y=peek();
    if(y!=-1){

        cout<<"top element of the stack is:"<<y<<endl; 


    }

    return 0;  
}                       