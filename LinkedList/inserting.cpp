#include <iostream>

using namespace std;

struct Node {
  int value;
  Node* next;
};

void insertAtFront(Node* &head, int value) {
  Node* newNode = new Node;
  newNode->value = value;

  newNode->next = head;
  head = newNode;
}

void insertAtLast(Node* &head, int value) {
  Node* newNode = new Node;
  newNode->value = value;
  newNode->next = nullptr;

  if(head == nullptr) {
    head = newNode;
    return;
  }

  Node* last = head;
  while(last->next != nullptr) {
    last = last->next;
  }

  last->next = newNode;

}

void deleteAtFront(Node* &head) {
  if(head == nullptr) return;
  Node* temp = head;
  head = head->next;
  delete temp;
  
}

void deleteAtLast(Node* &head) {
  if(head == nullptr) return;

  if(head->next == nullptr) {
    delete head;
    head = nullptr;
    return;
  }

  Node* last = head;

  while(last->next->next != nullptr) {
    last = last->next;
  }
  delete last->next;
  last->next = nullptr; 

}

void printList(Node* n) {
  while(n != nullptr) {
    cout << n->value << " ";
    n = n->next;
  }
}

int main() {
  Node* head = nullptr;

  insertAtFront(head, 10);
  insertAtFront(head, 20);
  insertAtFront(head, 30);
  insertAtLast(head, 40);
  deleteAtFront(head);
deleteAtLast(head);

  printList(head);

}