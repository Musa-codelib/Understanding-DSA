#include <iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int top = -1;
bool isempty()
{
  if(top==-1)
  return true;
  else
  return false;
}
void push(int value)
{
if(top==SIZE-1){ 
    cout<<"Stack is full!"<<endl; 
    }
else{
    top++;
    A[top]=value;
  }
}
void pop() {
 if(isempty())
  cout<<"Stack is empty!\n";
 else top--;
}
void show_top()
{
 if(isempty())
  cout<<"Stack is empty!\n";
else
cout<<"Element at top is: "<<A[top]<<endl;
}
void displayStack()
{
  if(isempty())
 {
cout<<"Stack is empty!\n"; }
else {
for(int i=0 ; i<=top; i++) cout<<A[i]<<" ";
   cout<<"\n";
  }
}
int main() {
int choice, flag=1, value;
while( flag == 1)
{
cout<<"1.PUSH"<<endl; 
cout<<"2.POP"<<endl;
cout<<"3.SHOW_TOP"<<endl;
cout<<"4.DISPLAY_STACK"<<endl;
cout<<"5.EXIT"<<endl; 
cin>>choice; switch (choice)
{
case 1: cout<<"Enter Value:\n";
        cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: show_top();
         break;
 case 4: displayStack();
         break;
case 5: flag = 0; break;
} 
}
return 0; }

