#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Function to add a node at the end of the list
    void append(int new_data) {
        Node* new_node = new Node(new_data);
        if (head == nullptr) {
            head = new_node;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = head;
        }
    }

    // Function to print the list starting from the head
    void printList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.append(10);
    cll.append(20);
    cll.append(30);
    cll.append(40);
    
    cll.append(50);
    cll.append(60);
    cll.append(70);
    cll.append(80);

    cout << "Circular linked list: ";
    cll.printList();

    return 0;
}
