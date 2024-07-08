#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
};


void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
                    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        } 
        temp->next = newNode;
    }
}


void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}


void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == nullptr) return;

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

int main() {
    Node* head = nullptr;

 
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);

   
    cout << "Linked List: ";
    display(head);

    
    deleteNode(head, 3);
            
    
    cout << "Linked List after deleting 3: ";
    display(head);

    return 0;
}
