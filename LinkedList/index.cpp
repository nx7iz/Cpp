// No random access
// size can be changed

#include <iostream>

using namespace std;

class Node
{
public:
  int value;
  Node *next;
};

class test
{
};

void printList(Node *n)
{
  while (n != NULL)
  {
    cout << n->value << endl;
    n = n->next;
  }
}

void insertAtFront(Node **head, int newValue)
{
  // 1. Prepare a newNode
  Node *newNode = new Node();
  newNode->value = newValue;

  // 2. Put it in front of the current head
  newNode->next = *head;

  // 3. Move head of the list to the point to the newNode
  *head = newNode;
}

void insertAtLast(Node **head, int newValue)
{
  // 1. Prepare a newNode
  Node *newNode = new Node();
  newNode->value = newValue;
  newNode->next = NULL;

  // 2. If Linked list is empty, newNode will be a head node
  if (*head == NULL) {
    *head = newNode;
    return;
  }

  // 3. Find the last node
  Node* last = *head;
  while(last->next != NULL) {
    last = last->next;
  }

  // 4. Insert newNode after last node(at the end)
  last->next = newNode;
}

int main()
{
  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();

  head->value = 1;
  head->next = second;

  second->value = 2;
  second->next = third;

  third->value = 3;
  third->next = NULL;

  insertAtFront(&head, -1);
  insertAtLast(&head, 4);
  printList(head);
}