#include<iostream>
using namespace std;

int stack[5],top=-1;
void pop(){
    if(top==-1){
        cout<<"stack is empty:";
        
    }else{
        cout<<"poped element:"<<stack[top]<<endl;
        top--;
    }
}
int main(){
    stack[++top]=1;
    stack[++top]=2;
    stack[++top]=3;
    stack[++top]=4;
    stack[++top]=5;


pop();
pop();
pop();
pop();
pop();


return 0;
}