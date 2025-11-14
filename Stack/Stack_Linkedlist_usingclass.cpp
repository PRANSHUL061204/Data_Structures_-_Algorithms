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

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty.\n";
            return;
        }
        cout << "Stack Elements are: ";
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!!\n";
            return;
        }
        Node *temp = top;
        cout << "Popped Element is: " << top->data << "  " << endl;
        top = top->next;
        delete temp;
    }
    bool isEmpty()
    {
        return top == nullptr;
    }
};
int main()
{
    Stack s;
    s.push(15);
    s.push(25);
    s.push(35);
    s.display();
    cout << "\nStack after Popping is: \n";
    s.pop();
    s.pop();
    s.display();
}