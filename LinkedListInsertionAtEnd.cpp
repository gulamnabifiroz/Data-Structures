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
void insertAtEnd(Node*& head, int value) {
    Node* new_node = new Node(value);
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;  
    }
    temp->next = new_node;  
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {  
    Node* head = new Node(1);  

    insertAtEnd(head, 4);
    display(head);

    insertAtEnd(head, 5);
    display(head);

    insertAtEnd(head, 10);
    display(head);

    insertAtEnd(head, 20);
    display(head);

    insertAtEnd(head, 30);
    display(head);

    return 0;
}
