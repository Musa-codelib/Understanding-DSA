#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to check if a singly linked list is empty
bool isListEmpty(Node* head) {
    return (head == nullptr);
}

int main() {
    // Create an empty linked list (head is nullptr)
    Node* head = nullptr;
    
    // Call the isListEmpty function to check if the list is empty
    bool isEmpty = isListEmpty(head);
    
    if (isEmpty) {
        cout << "The linked list is empty." << endl;
    } else {
        cout << "The linked list is not empty." << endl;
    }
    
    return 0;
}