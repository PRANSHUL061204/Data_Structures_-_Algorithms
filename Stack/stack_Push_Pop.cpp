#include <iostream>
using namespace std;
#define SIZE 10

int stack[SIZE];
int top = -1;

void push()
{
    int x;
    if (top == SIZE - 1)
        cout << "\nStack Overflow\n";
    else
    {
        cout << "\nEnter the Element to be Pushed: ";
        cin >> x;
        stack[++top] = x;
        cout << "Pushed " << x << " into Stack.\n";
    }
}

void pop()
{
    if (top == -1)
        cout << "\nStack Underflow\n";
    else
        cout << "Popped " << stack[top--] << " from Stack.\n";
}

void disp()
{
    if (top == -1)
        cout << "\nStack is Empty\n";
    else
    {
        cout << "\nStack Elements:\n";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            cout << "\nExiting...\n";
            break;
        default:
            cout << "Invalid Choice\n";
        }
    } while (choice != 4);
}
