#include <iostream>
using namespace std;

#define SIZE 5

int stackArr[SIZE];
int top = -1;

// Push operation
void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack" << endl;
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << stackArr[top] << " popped from stack" << endl;
        top--;
    }
}

// Display operation
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack: ";

        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}