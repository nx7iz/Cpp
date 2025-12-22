#include<iostream>
using namespace std;

int stack[5];
int n = 5;
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isfull() {
    return top == n - 1;
}

void push() {
    if (top == n - 1) {
        cout << "Stack is full." << endl;
    }
    else {
        int x;
        cout << "Enter a value to push: ";
        cin >> x;
        top++;
        stack[top] = x;
    }
}


void pop() {
    if(top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else {
        return stack[top];
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}


int main()
{
    pop();
    push();
    push();
    push();
    push();
    push();
    pop();
    display();
    // peek();
    
}
