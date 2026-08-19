#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }

        rear++;
        queueArr[rear] = value;

        cout << value << " inserted into queue" << endl;
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
    } else {
        cout << queueArr[front] << " removed from queue" << endl;
        front++;
    }
}

// Display operation
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}