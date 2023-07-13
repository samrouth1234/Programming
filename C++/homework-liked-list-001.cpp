#include <iostream>
#include <conio.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};
// Initialize the linked list
Node* initialize() {
  // Return nullptr
  return NULL;
}
// Create a new node
Node* GetNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Free a node
void FreeNode(Node* node) {
    delete node;
}

// Count the number of nodes in the list
int CountNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Create a linked list
Node* CreateList(int values[], int size) {
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < size; i++) {
        Node* newNode = GetNode(values[i]);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Traverse and print the linked list
void Traverse(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Search for a value in the linked list
bool Search(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Insert a node at the end of the linked list
Node* InsertNode(Node* head, int value) {
    Node* newNode = GetNode(value);

    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    return head;
}

// Delete a node from the linked list
Node* DeleteNode(Node* head, int value) {
    if (head == NULL) {
        return NULL;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        FreeNode(temp);
    } else {
        Node* current = head;
        while (current->next != NULL) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = current->next->next;
                FreeNode(temp);
                break;
            }
            current = current->next;
        }
    }

    return head;
}

int main() {
    int values[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(values) / sizeof(values[0]);

    Node* head = CreateList(values, size);
    cout << "Linked List: ";
    Traverse(head);

    cout << "Number of Nodes: " << CountNodes(head) << endl;

    int searchValue = 4;
    cout << "Search for " << searchValue << ": ";
    if (Search(head, searchValue)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    int insertValue = 6;
    head = InsertNode(head, insertValue);
    
    return 0;
}
