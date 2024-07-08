#include <iostream>
using namespace std;

int queue[5], n = 5, front = -1, rear = -1;

int peek() {
    if (front == -1) {
        return -1;  
    } else {
        return queue[front];
    }
}

int main() {
  
    front = 0;
    rear = 2;
    queue[0] = 10;
    queue[1] = 20;
    queue[2] = 30;   

    int y = peek();
    if (y == -1) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front element of the queue is: " << y << endl;
    }

    return 0;  
}
   
   