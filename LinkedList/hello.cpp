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

void insertAtAnyPoint(Node* &head, int pos, int value) {
  if(pos == 1) {
    insertAtFront(head, value);
    return;
  }

  Node* temp = head;

  for(int i = 1; i < pos - 1 && temp != nullptr; i++) {
    temp = temp->next;
  }

  if(temp == nullptr) {
    cout << "Position out of bounds!" << endl;
    return;
  }

  Node* newNode = new Node;
  newNode->value = value;

  newNode->next = temp->next;
  temp->next = newNode;
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

  Node* temp = head;
  while(temp->next->next != nullptr) {
    temp = temp->next;
  }
  
  delete temp->next;
  temp->next = nullptr;

}

void deleteAtAnyPoint(Node* &head, int pos) {
  if(pos == 1) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node* temp = head;
  for(int i = 1; i < pos - 1 && temp != nullptr; i++) {
    temp = temp->next;
  }

  if(temp == nullptr || temp->next == nullptr) {
    cout << "Position out of bounds." << endl;
    return;
  }

  Node* nodeToDelete = temp->next;
  temp->next = nodeToDelete->next;
  delete nodeToDelete;
}

void reverseList(Node* &head) {
  Node* prev = nullptr;
  Node* curr = head;
  Node* next = nullptr;

  while(curr != nullptr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
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
  insertAtLast(head, 40);
  insertAtLast(head, 30);
  // deleteAtFront(head);
  // deleteAtLast(head);
  // insertAtAnyPoint(head, 6, 50);
  // deleteAtAnyPoint(head, 4);

  // reverseList(head);
  printList(head);
}