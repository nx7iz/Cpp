#include <iostream>

using namespace std;

struct Coach {
    int coachNum;
    string type;     // e.g., "Sleeper", "Economy"
    Coach* next;     // Pointer to next coach
    Coach* prev;     // Pointer to previous coach
};

// Global pointers so all functions can access them
Coach* head = nullptr;
Coach* tail = nullptr;

// Function to create a new coach node easily
Coach* createNewCoach(int number, string type) {
    Coach* newNode = new Coach;
    newNode->coachNum = number;
    newNode->type = type;
    
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// 1. Add to the front of the train
void addFront(int number, string type) {
    Coach* newCoach = createNewCoach(number, type);
    
    if (head == nullptr) {
        // If train is empty, this is the first and last coach
        head = tail = newCoach;
    } else {
        newCoach->next = head; // Point new coach to old head
        head->prev = newCoach; // Point old head back to new coach
        head = newCoach;       // Update head
    }
    cout << "Added coach " << number << " to front." << endl;
}

// 2. Add to the end of the train
void addEnd(int number, string type) {
    Coach* newCoach = createNewCoach(number, type);

    if (tail == nullptr) {
        head = tail = newCoach;
    } else {
        tail->next = newCoach; // Old tail points to new coach
        newCoach->prev = tail; // New coach points back to old tail
        tail = newCoach;       // Update tail
    }
    cout << "Added coach " << number << " to end." << endl;
}

// 3. Insert at a specific position (e.g., Position 2 means 2nd coach)
void insertAtPos(int pos, int number, string type) {
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (pos == 1) {
        addFront(number, type);
        return;
    }

    Coach* temp = head;
    // Loop to find the coach just before the position we want
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position is too far, adding to end instead." << endl;
        addEnd(number, type);
    } else if (temp == tail) {
        addEnd(number, type);
    } else {
        // Inserting in the middle
        Coach* newCoach = createNewCoach(number, type);
        Coach* nextNode = temp->next;

        // Linking new node
        newCoach->prev = temp;
        newCoach->next = nextNode;

        // Fixing existing nodes
        temp->next = newCoach;
        nextNode->prev = newCoach;
        
        cout << "Inserted at position " << pos << endl;
    }
}

// 4. Delete the first coach
void deleteFront() {
    if (head == nullptr) {
        cout << "Train is empty!" << endl;
        return;
    }

    Coach* temp = head;
    if (head == tail) {
        // Only one coach was there
        head = tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    cout << "Front coach deleted." << endl;
}

// 5. Delete the last coach
void deleteEnd() {
    if (tail == nullptr) {
        cout << "Train is empty!" << endl;
        return;
    }

    Coach* temp = tail;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    cout << "Last coach deleted." << endl;
}

// 6. Delete from specific position
void deleteAtPos(int pos) {
    if (head == nullptr) return;
    
    if (pos == 1) {
        deleteFront();
        return;
    }

    Coach* temp = head;
    for (int i = 1; i < pos && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position not found." << endl;
        return;
    }

    if (temp == tail) {
        deleteEnd();
    } else {
        // Middle deletion logic
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
        cout << "Coach at position " << pos << " deleted." << endl;
    }
}

// 7. Search by Number and Update Type
void searchAndUpdate(int number, string newType) {
    Coach* temp = head;
    bool found = false;
    
    while (temp != nullptr) {
        if (temp->coachNum == number) {
            temp->type = newType;
            cout << "Coach " << number << " updated to " << newType << "." << endl;
            found = true;
            break; // Stop looking once found
        }
        temp = temp->next;
    }
    
    if (!found) {
        cout << "Coach number " << number << " not found." << endl;
    }
}

void displayTrain() {
    if (head == nullptr) {
        cout << "Train is empty." << endl;
        return;
    }

    Coach* temp = head;
    while (temp != nullptr) {
        cout << temp->coachNum << "-" << temp->type << " ";
        temp = temp->next;
    }
}

int main() {
    int choice, number, pos;
    string type;

    while (true) {
        cout << "1. Add Front  2. Add End  3. Insert at Pos" << endl;
        cout << "4. Del Front  5. Del End  6. Del at Pos" << endl;
        cout << "7. Search & Update  8. Display  9. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 9) break;

        if (choice == 1) {
            cout << "Enter Number and Type: ";
            cin >> number >> type;
            addFront(number, type);
        }
        else if (choice == 2) {
            cout << "Enter Number and Type: ";
            cin >> number >> type;
            addEnd(number, type);
        }
        else if (choice == 3) {
            cout << "Enter Position, Number, Type: ";
            cin >> pos >> number >> type;
            insertAtPos(pos, number, type);
        }
        else if (choice == 4) deleteFront();
        else if (choice == 5) deleteEnd();
        else if (choice == 6) {
            cout << "Enter Position to delete: ";
            cin >> pos;
            deleteAtPos(pos);
        }
        else if (choice == 7) {
            cout << "Enter Coach Number to search and New Type: ";
            cin >> number >> type;
            searchAndUpdate(number, type);
        }
        else if (choice == 8) displayTrain();
    }

    return 0;
}