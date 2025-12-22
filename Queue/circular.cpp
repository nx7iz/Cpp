#include <iostream>

using namespace std;

int queue[5];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return (rear + 1) % 5 == front;
}

void enqueue(int x) {
    if (isFull()) 
        cout << "Queue is full." << endl;
    else {
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % 5;
        queue[rear] = x;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }
    else {
        cout << "The dequeued element is " << queue[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % 5;
        }
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }
    else {
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % 5;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(7);
    enqueue(9);
    enqueue(3);
    display();

    dequeue();
    dequeue();
    display();
    enqueue(-1);
    enqueue(0);
    enqueue(0);
    display();
}