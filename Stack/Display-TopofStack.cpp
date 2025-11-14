#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    void push(int val)
    {
        Node *Newnode = new Node(val);
        Newnode->next = top;
        top = Newnode;
    }
    bool isEmpty()
    {
        return top == nullptr;
    }

    void peek()
    {
        cout << "Top of the Stack is :  ";
        // if(isEmpty())
        // cout<<"NULL";
        cout << top->data;
    }
};
int main()
{
    Stack s;
    s.push(15);
    s.push(25);
    s.push(35);
    s.peek();
}
