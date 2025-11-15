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
        if (tail == nullptr)
            head = tail = Newnode;
        else
        {
            tail->next = Newnode;
            tail = Newnode;
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
            cout << "\nQueue is Empty.\n";
            return;
        }
        cout << "\nQueue Elements are: ";
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "\n";
    }
    void del()
    {
        if (head == NULL)
        {
            cout << "Queue is Empty";
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
    //    null|34|3->3|35|4
    void peek()
    {
        if (head == NULL)
        {
            cout << "\n Queue is Empty..\n";
            return;
        }
        cout << "\nFront Element of the Queue is: " << head->data << endl;
    }
    void seek()
    {
        if (tail == NULL)
        {
            cout << "\n Queue is Empty..\n";
            return;
        }
        cout << "\nLast Element of the Queue is: " << tail->data << endl;
    }
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
    q.del();
    q.peek();
    q.seek();
    q.del();
    q.del();
    q.display();
}