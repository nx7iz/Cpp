#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Class representing the Singly Linked List
class SinglyLinkedList {
private:
    Node* head;

public:
    // Constructor initializes head to nullptr (empty list)
    SinglyLinkedList() {
        head = nullptr;
    }

    // Insert at the beginning (First)
    void insertAtFirst(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end (Last)
    void insertAtLast(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Delete from the beginning (First)
    void deleteAtFirst() {
        if (head == nullptr) {
            cout << "List is empty, cannot delete." << endl;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Delete from the end (Last)
    void deleteAtLast() {
        if (head == nullptr) {
            cout << "List is empty, cannot delete." << endl;
        } else if (head->next == nullptr) { // Only one node in the list
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != nullptr && temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }

    // Print the list
    void printList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

// Main function to test the Singly Linked List operations
int main() {
    SinglyLinkedList list;

    // Insert elements
    list.insertAtFirst(10);
    list.insertAtFirst(20);
    list.insertAtLast(5);
    list.insertAtLast(1);

    // Print list after insertions
    cout << "List after insertions: ";
    list.printList();

    // Delete elements
    list.deleteAtFirst();
    list.deleteAtLast();

    // Print list after deletions
    cout << "List after deletions: ";
    list.printList();

    return 0;
}
