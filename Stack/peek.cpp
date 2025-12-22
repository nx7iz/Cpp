#include <iostream>

using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = nullptr;

void push(char value) {
    Node* newNode =  new Node;
    newNode->data = value;

    newNode->next = top;
    top = newNode;
}

void pop() {
    if(top == nullptr) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
}

char peek() {
    if(top == nullptr) {
        cout << "Stack is empty " << endl;
        return -1;
    }
    return top->data;
}

void display() {
    if(top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    Node* current = top;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    push('H');
    push('E');
    push('L');
    push('L');
    push('O');
    pop();
    pop();
    pop();
    pop();
    pop();
    // display();
}