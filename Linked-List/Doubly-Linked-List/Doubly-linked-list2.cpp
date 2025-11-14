// Creating Doubly Linked-list and Pushing Elements into Doubly Linked List
#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL; // Initialize to avoid garbage values
        next = NULL;
    }
};

class linkedlist
{
    node *head;
    node *tail;

public:
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    // Function to push elements at the end
    void push(int val)
    {
        node *NEW = new node(val);
        if (head == NULL)
        {
            head = tail = NEW;
        }
        else
        {
            NEW->prev = tail;
            tail->next = NEW;
            tail = NEW;
        }
    }

    // Function to print the doubly linked list
    void print()
    {
        node *temp = head;
        cout << "Doubly Linked-List is: ";
        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    linkedlist list;
    list.push(11);
    list.push(22);
    list.push(33);
    list.push(44);
    list.push(55);
    list.print();

    return 0;
}
