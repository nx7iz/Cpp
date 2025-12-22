#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* rear = nullptr;
Node* front = nullptr;

bool isEmpty() {
    return front == nullptr && rear == nullptr;
}

void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    Node* temp = front;
    cout << "The dequeued element is: " << front->data << endl;
    front = front->next;

    if (front == nullptr) {
        rear = nullptr;
    }
    delete temp;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    Node* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();

    dequeue();
    display();
    enqueue(40);
    display();
}