// Creating Doubly Linked-list and Pushing Elements into Front of Doubly Linked List and after that deleting the node
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
        prev = NULL; // Initialize pointers
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

    // Pushing Elements into Front of Doubly Linked List
    void push(int val)
    {
        node *NEW = new node(val);
        if (head == NULL)
        {
            head = tail = NEW;
        }
        else
        {
            NEW->next = head;
            head->prev = NEW;
            head = NEW;
        }
    }

    //Popping Last Element from the doubly Linked-List
    void pop_last(){
        if(head==NULL){
            cout<<"Double Linked-list is Empty";
            return;
        }
        node *temp=tail;
        tail=tail->prev;

        if(tail != NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }

    // Print the doubly linked list
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
    cout<<endl;
    list.pop_last();
    list.print();

    return 0;
}
