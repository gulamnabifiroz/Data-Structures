#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;

        Node(int data) {
            value = data;
            next = NULL;
        }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node*& head, int value) {
    Node* new_node = new Node(value);  // Fix the variable name
    new_node->next = head;
    head = new_node;
}


void display(Node* head) {  
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;  // Fix the output from "Null" to "NULL"
}

int main() {  
    Node* head = NULL;

    // Insert nodes and display the list
    insertAtHead(head, 4);
    display(head);

    insertAtHead(head, 5);
    display(head);

    insertAtHead(head, 10);
    display(head);

    return 0;
}
