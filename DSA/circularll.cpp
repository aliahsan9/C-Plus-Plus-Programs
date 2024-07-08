#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node*
    next;

    node(int val){

        data=val;

        next=null;


    }
}

void insertattail(node* & head,int val)
{

    node*n=newnode(val);
    node*temp=head;
}
while (temp->next!=head)
{
    temp=temp->next;
}
temp->next=n;
n->next=head;
