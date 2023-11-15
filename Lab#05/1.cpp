#include <iostream>                                                     // Library for input output functions
using namespace std;                                                    // Library for naming variables

struct node {                                                           // Declaring a structure of Node
int data;
struct node *next; 
};
struct node* front = NULL;                                              // front pointer
struct node* rear = NULL;                                               // rear pointer
struct node* p;

void Insert(int val)                                                    // Function to insert values in queue
{
    if (rear == NULL)                                                   // Add values from rear
    { 
        rear = new node; 
        rear->next = NULL; 
        rear->data = val; 
        front = rear;
    } 
    else                                                                // Add values from front
    { 
        p=new node;
        rear->next = p;
        p->data = val;
        p->next = NULL;
        rear = p;
    } 
}

void Delete()                                                           // Function to delete the values from queue
{
    p = front;
    if (front == NULL) {                                                    // If queue is empty
        cout<<"Queue is empty!!"<<endl;
    } 
    else if (p->next != NULL) {                                             // Delete from front
        p = p->next;
        cout<<"Element deleted from queue is : "<<front->data<<endl; 
        free(front);
        front = p;
    }
    else {
        cout<<"Element deleted from queue is : "<<front->data<<endl;            // If only one element in the queue
        free(front);
        front = NULL;
        rear = NULL;
    } 
}

void Display()                                                                  // Function to display values from queue
{
    p = front;
    if ((front == NULL) && (rear == NULL)) {                                    // If queue is empty
        cout<<"Queue is empty"<<endl;
        return;
    }
    while (p != NULL) {                                                      // Traverse through the queue and  cout all values
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<"\n\n";
}

int main()                                                                      // Main function
{
    cout<<"Queue Created:"<<endl;
    Insert(1);                                                                   // Calling the insert function
    Insert(2);
    Insert(5);
    Insert(77);
    Insert(33);
    Insert(9);

    Display();                                                                   // Display the queue
    cout << "\n";

    Delete();                                                                    // Delete the front value
    cout << "Queue after deletion:\n";                                           // Display the queue after deletion
    Display();

    Delete();                                                                    // Delete the front value
    cout << "Queue after deletion:\n";                                           // Display the queue after deletion
    Display();

    Delete();                                                                    // Delete the front value
    cout << "Queue after deletion:\n";                                           // Display the queue after deletion
    Display();

    Delete();                                                                    // Delete the front value
    cout << "Queue after deletion:\n";                                           // Display the queue after deletion
    Display();
    return 0; 
}