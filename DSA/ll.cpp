#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;

        next=NULL;
    }
};

void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
        }
    }
    temp="head";
    while{(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;
}

 void display(node* head){
    node* temp=head;
    while(temp!=null){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
cout<<"null"<<endl;

 }
 bool search(node8 head,int key){

    node* temp=head;
    while(temp->data==key){
        return true;
    }
    temp=temp->next;
 }
 return false;

 int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
     Display (head);
    cout<<"search"(head,5)<<endl;
 
    return 0;

 }