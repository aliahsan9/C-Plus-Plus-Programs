#include <iostream>  // Include the iostream library for input and output

using namespace std;

// Define a class for the stack
class Stack {
private:
    int top;         // Index of the top element in the stack
    int capacity;    // Maximum capacity of the stack
    int* array;      // Dynamic array to store stack elements

public:
    // Constructor to initialize the stack with a given size
    Stack(int size) {
        capacity = size;
        array = new int[capacity]; // Allocate memory for the stack
        top = -1;                  // Initialize top to -1 (indicating an empty stack)
    }

    // Destructor to clean up the allocated memory
    ~Stack() {
        delete[] array;
    }

    // Function to push an element onto the stack
    void push(int data) {
        if (top >= capacity - 1) { // Check if the stack is full
            cout << "Stack overflow" << endl;
            return;
        }
        array[++top] = data; // Increment top and add the new element
    }

    // Function to pop an element from the stack
    void pop() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack underflow" << endl;
            return;
        }
        --top; // Decrement top to remove the top element
    }

    // Function to get the top element of the stack without removing it
    int peek() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack is empty" << endl;
            return -1; // Return -1 to indicate an empty stack
        }
        return array[top]; // Return the top element
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top < 0; // Return true if the stack is empty
    }

    // Function to display all elements in the stack
    void display() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++) { // Loop through and print all elements
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(5); // Create a stack with a capacity of 5

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    cout << "Stack elements: ";
    stack.display(); // Display the stack elements

    cout << "Top element: " << stack.peek() << endl; // Display the top element

    stack.pop(); // Pop the top element
    cout << "Stack elements after pop: ";
    stack.display(); // Display the stack elements after pop

    return 0;
}
