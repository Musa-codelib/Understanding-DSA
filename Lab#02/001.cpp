#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to count the number of nodes in a singly linked list
int countNodes(Node* head) {
    int count = 0; // Initialize the count to 0
    
    // Traverse the list and increment count for each node
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    
    return count;
}

int main() {
    // Create a sample linked list
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    
    // Call the countNodes function to count the nodes
    int nodeCount = countNodes(head);
    
    std::cout << "Number of nodes in the linked list: " << nodeCount << std::endl;
    
    // Clean up the memory (deallocation of nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}


#include <iostream>

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
        std::cout << "The linked list is empty." << std::endl;
    } else {
        std::cout << "The linked list is not empty." << std::endl;
    }
    
    return 0;
}

#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to delete a node with a given value from a singly linked list
void deleteNodeWithValue(Node*& head, int valueToDelete) {
    // Handle the case where the node to be deleted is the head node
    if (head != nullptr && head->data == valueToDelete) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* current = head;
    Node* prev = nullptr;
    
    // Traverse the list to find the node with the given value
    while (current != nullptr && current->data != valueToDelete) {
        prev = current;
        current = current->next;
    }
    
    // Update pointers to bypass the node to be deleted
    if (current != nullptr) {
        prev->next = current->next;
        delete current;
    }
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    
    std::cout << "Original linked list: ";
    displayList(head);
    
    int valueToDelete = 3;
    deleteNodeWithValue(head, valueToDelete);
    
    std::cout << "Linked list after deleting node with value " << valueToDelete << ": ";
    displayList(head);
    
    // Clean up the memory (deallocation of nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}


