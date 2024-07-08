#include<iostream>
using namespace std;
 struct node{

    int data;
    node *next;

 };
 node *head=NULL;
 void insert(int n){
    node *newnode=new node;

    newnode -> data=n;
    newnode ->next =head;

    head=newnode;


 } 
 void print (){

    cout<<"data eleemnts in single linked list are:"<<endl;
   node*temp=head;
 while(temp!=NULL){

    cout<<temp->data<<" "<<endl;        
    temp=temp->next;                  
 }
 }
                           
 int main(){

insert(1);
insert(3);
insert(5);      
insert(7)                            ;
insert(8);      
insert(11);
print();
 }
                