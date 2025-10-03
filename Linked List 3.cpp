#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertStart(Node* &head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

void display(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertStart(head, 10);
    insertStart(head, 20);
    insertStart(head, 30);
    cout << "Linked List (start insertion): ";
    display(head);
}
