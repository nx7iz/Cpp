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

int main() {
    push(42124);
}