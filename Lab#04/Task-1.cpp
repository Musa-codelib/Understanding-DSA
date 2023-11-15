#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string &input)
{
    stack <char> st;
    for (char ch : input){
        if (ch == ')'){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return true;

            }
            char  top = st.top();
            st.pop();
            if (( ch==')' && top!='(' )){
                return false;
            }
        }
    }
    return st.empty();
}

int main(){

string input;

cout<<"Enter the string of parentheses."<<endl;
cin>>input;

if(isBalanced(input)){
cout<<"The string is balanced"<<endl;}

else { 
cout<<"The string is not balanced"<<endl;
    }
}