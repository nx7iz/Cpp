#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* top = NULL;

void push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    
    newNode->next = top;
    top = newNode;
    cout << value << " pushed to stack." << endl; 
}

void pop() {
    if(top == NULL) {
        cout << "Stack is empty." << endl;
        return;
    }
    Node* temp = top;
    cout << "The popped element is: " << top->data << endl;
    top = top->next;
    delete temp;
}

int main() {
    pop();
    push(42124);
    pop();
}