#include <iostream>

using namespace std;

int queue[5];
int front = -1;
int rear = -1;
int n = 5;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return rear == n - 1;
}

void enqueue(int x) {
    if (isFull()) 
        cout << "Queue is full." << endl;
    else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }
    else {
        cout << "The dequeued element is " << queue[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }
    else {
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(-1);

    display();

    dequeue();

    display();

    enqueue(0);

    display();
}