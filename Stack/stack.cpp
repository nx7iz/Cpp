#include<iostream>
using namespace std;

int stack[5];
int n = 5;
int top = -1;

void push(int x) {
    if (top == n - 1) {
        cout << "Stack is full." << endl;
    }
    else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if(top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "The popped element is " << stack[top];
        top--;
    }
}

int main()
{
    pop();
    push(4);
    push(2);
    push(1);
    push(2);
    push(4);
    push(4);
    pop();
    
}
