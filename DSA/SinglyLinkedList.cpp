#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

};

//funcrion to insert a node in the linked list
void insert(node*& head,int data){
node* newnode=new node();
newnode->data=data;
newnode->next=nullptr;


if (head==nullptr){
    head=newnode;

}else{
    
    node* temp=head;
    while( temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;

}
}
//function to display the linked list
void display(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
temp= temp->next;
    }
    cout<<"nullptr."<<endl;
}

void deletenode(node*head,int key){
    if(head==nullptr)
    return;
    if(head->data==key){
        node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr&&temp->next->data!=key){
        temp=temp->next;
    }

    if(temp->next==nullptr)
    return;
    node*nodetodelete=temp->next;
    temp->next=temp->next->next;
    delete nodetodelete;

}


int main(){
    node*head=nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    cout<<"linked list: ";
    display(head);
deletenode(head,3);
cout<<"aftrer deleting node 3: ";
display(head);
    return 0;
}