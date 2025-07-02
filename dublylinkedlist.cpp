#include<iostream>
using namespace std;

// Node definition
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Doubly Linked List
class DoublyLinkedList {
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void displayBackward() {
        Node* temp = tail;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }

    void deleteFromEnd() {
        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head == tail) {
            delete tail;
            head = tail = nullptr;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList l1;

    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.insertAtEnd(50);

    cout << "Forward Display:\n";
    l1.displayForward();

    cout << "Backward Display:\n";
    l1.displayBackward();

    cout << "After Deletion:\n";
    l1.deleteFromEnd();
    l1.displayForward();

    return 0;
}
