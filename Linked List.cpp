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

int main() {
    Node* a = new Node(1);
    cout << "Value: " << a->value << ", Next: " << a->next << endl;
    delete a;
    return 0;
}

