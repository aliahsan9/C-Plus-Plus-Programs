#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // Function to add a node at the front of the list
    void push(int new_data) {
        Node* new_node = new Node(new_data);
        new_node->next = head;
        if (head != nullptr) {
            head->prev = new_node;
        }
        head = new_node;
    }

    // Function to print the list from the head to the last node
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to print the list from the last node to the head
    void printListReverse() {
        Node* temp = head;
        if (temp == nullptr) {
            return;
        }
        
        // Go to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Print in reverse
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.push(10);
    dll.push(20);
    dll.push(30);
    dll.push(40);

    cout << "Doubly linked list in forward direction: ";
    dll.printList();

    cout << "Doubly linked list in reverse direction: ";
    dll.printListReverse();

    return 0;
}
