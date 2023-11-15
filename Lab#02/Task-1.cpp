#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;


    node(int val){
        data=val;       //node has integer value ans next pointer to store the address of next node
        next=NULL;
    }
};

void insertTail(node* &head, int val){
    node* n=new node (val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertHead(node* &head, int val){
    node* n=new node (val);
    n->next=head;
    head=n;
}

// Function to count the number of nodes in a singly linked list
int countNodes(node* head) {
    int count = 0; // Initialize the count to 0
    
    // Traverse the list and increment count for each node
    node * current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    
    return count;
}

int main() {
    // Create a linked list
    node * head = NULL;
    insertTail(head,12);
    insertTail(head,134);
    insertTail(head,11);
    insertTail(head,17);
    insertTail(head,62);
    insertTail(head,2);
    // Call the countNodes function to count the nodes
    int nodeCount = countNodes(head);
    cout << "                                    " << endl;
    cout << " Number of nodes in the linked list: " << nodeCount << endl;
    cout << "                                    " << endl;
    return 0;
}
