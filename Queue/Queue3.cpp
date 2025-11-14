// Implementing Queue using LinkedList and with the help of Classes

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
class Queue
{
private:
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insert(int val)
    {
        Node *Newnode = new Node(val);
        if(tail==nullptr)
        head=tail=Newnode;
        else{
        tail->next=Newnode;
        tail=Newnode;
        }
    }
    bool isEmpty()
    {
        return head == nullptr;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty.\n";
            return;
        }
        cout << "Queue Elements are: ";
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "  " << endl;
            temp = temp->next;
        }
    }
    // void del()
    // {
    //     if (isEmpty())
    //     {
    //         cout << "Stack Underflow!!\n";
    //         return;
    //     }
    //     Node *temp = top;
    //     cout << "Popped Element is: " << top->data << "  " << endl;
    //     top = top->next;
    //     delete temp;
    // }
  
};
int main()
{
    Queue q;
    q.insert(11);
    q.insert(12);
    q.insert(13);
    q.insert(14);
    q.insert(15);
    q.display();
}