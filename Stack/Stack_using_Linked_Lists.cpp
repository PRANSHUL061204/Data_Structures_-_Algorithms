#include <iostream>
using namespace std;

struct Stack
{
    int data;
    Stack *next;
};

Stack *top = NULL;

void push(int x)
{
    Stack *temp = new Stack();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (top == NULL)
        cout << "Stack Underflow\n";
    else
    {
        cout << top->data << " Element Popped out from Stack\n";
        Stack *temp = top;
        top = top->next;
        delete temp;
    }
}

void display()
{
    Stack *temp = top;
    cout << "Stack Elements:\n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice, x;
    do
    {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Wrong Choice\n";
        }
    } while (choice != 4);
}
