#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;


    node(int val){
        data=val;
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

void display(node* head){
    node* temp=head;

    cout<<"List is: ";
    while(temp->next!=NULL){
        cout<< temp->data <<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

void deletion(node* head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;

    delete todel;
}

void delHead(node * &head){
    node * temp=head;
    head=head->next;
    delete temp;
}

int main() {
    // Create a sample linked list
    node * head = NULL;

    insertTail(head,2);
    insertTail(head,12);
    insertTail(head,134);
    insertTail(head,11);
    insertTail(head,17);
    insertTail(head,62);
    
    // Call the countNodes function to count the nodes
    int nodeCount = countNodes(head);
    cout << "                                    " << endl;
    cout << "Number of nodes in the linked list: " << nodeCount << endl;
    cout << "                                    " << endl;
    display(head);
    cout << "                                    " << endl;
    //delHead(head);
    deletion(head,134);
    cout << "After deleting node with the int value of '134' rest of the linked list is as below:- "<< endl ;
    display(head);
    cout << "                                    " << endl;
    return 0;
}
