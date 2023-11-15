#include <iostream>                                                     // Library for input output functions
using namespace std;                                                    // Library for naming variables

struct node {                                                           // Declaring a structure of Node
char data;
struct node *next; 
};
struct node* front = NULL;                                              // front pointer
struct node* rear = NULL;                                               // rear pointer
struct node* p;

void Insert(char val)                                                   // Function to insert values in queue
{
    if (rear == NULL)                                                   // Add values from fronts
    { 
        rear = new node; 
        rear->next = NULL; 
        rear->data = val; 
        front = rear;
    } 
    else                                                                // Add values in between
    { 
        p = new node;
        rear->next = p;
        p->data = val;
        p->next = NULL;
        rear = p;
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
    cout<<endl;
}

int LengthOfString()                                                            // Function to find the length of string in queue
{   
    int c = 0;
    p = front;
    while (p != NULL) {                                                      // Traverse through the queue and increment the count
        c++;
        p = p->next; 
    }

    return c;
}
int main()                                                                      // Main function
{
    cout<<"Queue Created:"<<endl;
    Insert('A');                                                                // Calling the insert function
    Insert('L');
    Insert('Q');
    Insert('A');
    Insert('I');
    Insert('D');
    Insert('A');

    Display();                                                                   // Display the queue
    cout << "\n";
    
    cout << "The length of string in Queue is: " << LengthOfString();            // Display the length of string in queue
    return 0; 
}