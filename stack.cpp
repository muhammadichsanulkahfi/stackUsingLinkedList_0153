#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
private:
     Node *top; //pointer to the top node of the stack

public:
     Stack()
     {
        top = NULL; //intilalize the stack with a null top pointer
     }

     //Push operation: Insert an element onto the top of the stack
     int push(int value)
     {
        Node *newNode = new Node(); //1. Allocate memory for the new node
        newNode->data = value;      //2. assign value
        newNode->next = top;        //3. set the next pointer of the newe node to the current
        top = newNode;              //4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
     }

     // IsEmpty operation : check if the stack is empty
     bool isEmpty()
     {
        return top == NULL; // retrun true if the top pointer is NULL, indicating an empty stack
     }

     // pop opertion : remove the topost element from the stack
     void pop()
     {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // if the stack is empty, print a massage and retrun
        } 
        cout << "Popped value: " << top->data << endl;
        top = top->next; //update the top pointer to the nexet node
     } 

     // peek operation : Retrive the value of  the topmost element without removing int
     
};

















































