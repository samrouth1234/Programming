#include <iostream>  
#include <conio.h>
using namespace std;  
  
// Node class  
class Node {  
public:  
  int data;  
  Node *next;  
  
  Node(int data) {  
    this->data = data;  
    this->next = NULL;  
  }  
};  
  
// Linked list class  
class LinkedList {  
private:  
  Node *head;  
  
public:  
  LinkedList() {  
    this->head = NULL;  
  }  
  // function insertAtBeginning liked list
  void insertAtBeginning(int data) {  
    Node *newNode = new Node(data);  
    newNode->next = head;  
    head = newNode;  
  }  
    // function insertAtEnd liked list
  void insertAtEnd(int data) {  
    Node *newNode = new Node(data);  
    if (head == NULL) {  
      head = newNode;  
      return;  
    }  
    Node *temp = head;  
    while (temp->next != NULL) {  
      temp = temp->next;  
    }  
    temp->next = newNode;  
  }  
   // function delect frist liked list
  void deleteAtBeginning() {  
    if (head == NULL) {  
      return;  
    }  
    Node *temp = head;  
    head = head->next;  
    delete temp;  
  }  
  // function delect end liked list
  void deleteAtEnd() {  
  if (head == NULL) {  
    return;  
  }  
  if (head->next == NULL) {  
    delete head;  
    head = NULL;  
    return;  
  }  
  Node *temp = head;  
  while (temp->next->next != NULL) {  
    temp = temp->next;  
  }  
  delete temp->next;  
  temp->next = NULL;  
}  
  // function output liked list
void printList() {  
  Node *temp = head;  
  while (temp != NULL) {  
    cout << temp->data << " ";  
    temp = temp->next;  
  }  
  cout << endl;  
}  
};  
  
int main() {  
// Create a linked list  
LinkedList List;  
  
// Insert some nodes at the beginning of the list  
List.insertAtBeginning(3);  
List.insertAtBeginning(2);  
List.insertAtBeginning(1);  
  
// Insert some nodes at the end of the list  
List.insertAtEnd(4);  
List.insertAtEnd(5);  
List.insertAtEnd(6);  
  
// Print the list  
cout << "Original list: ";  
List.printList();  
  
// Delete a node at the beginning of the list  
List.deleteAtBeginning();  
  
// Print the List again  
cout << "List after deleting a node at the beginning: ";  
List.printList();  
  
// Delete a node at the end of the list  
List.deleteAtEnd();  
  
// Print the List again  
cout << "List after deleting a node at the end: ";  
List.printList();  
  
return 0;  
}  
