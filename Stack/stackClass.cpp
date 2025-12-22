#include <iostream>

using namespace std;

class Stack
{
private:
  int stack[5]; 
  int top;

public:
  Stack() : top(-1) {}
  bool isEmpty() {
      return top == -1;
  }
  
  bool isFull(int n) {
      return top == n - 1;
  }
  void push(int n, int x) {
      if (isFull(n)) {
          cout << "Stack is full." << endl;
      }
      else {
          top++;
          stack[top] = x;
      }
  }

  void pop() {
      if(isEmpty()) {
          cout << "Stack is empty" << endl;
      }
      else {
          cout << "The popped element is " << stack[top] << endl;
          top--;
      }
  }
  int peek() {
      if (isEmpty()) {
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


};


int main()
{
    Stack s;
    int n = 5;
    s.pop();
    s.push(n, 4);
    s.push(n, 2);
    s.push(n, 1);
    s.display();
    s.pop();
    s.display();
    cout << s.peek() << endl;
}

// using namespace std;
// struct Node {
//     int data;
//     Node* next;
// };

// Node* top = NULL;

// void push(int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
    
//     newNode->next = top;
//     top = newNode;
//     cout << value << " pushed to stack." << endl; 
// }

// void pop() {
//     if(top == NULL) {
//         cout << "Stack is empty." << endl;
//         return;
//     }
//     Node* temp = top;
//     cout << "The popped element is: " << top->data << endl;
//     top = top->next;
//     delete temp;
// }

// int peek() {
//     if(top == NULL) {
//         cout << "Stack is empty " << endl;
//         return -1;
//     }
//     return top->data;
// }

// int main() {
//     pop();
//     push(42124);
//     cout << peek() << endl;
//     pop();
// }