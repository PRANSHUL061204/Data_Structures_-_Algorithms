// Linked-list Sum of all Nodes and findinng larger in it

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class linked_list
{
private:
    node *head;

public:
    linked_list()
    {
        head = NULL;
    }

    void insert(int value)
    {
        node *newnode = new node(value);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void sum()
    {
        int sum=0;
        node *temp=head;
        while (temp!= NULL)
        {
            sum+= temp->data;
            temp = temp->next;
        }
        cout<<"Sum of All Nodes is: "<<sum<<endl;
    }
    void larger()
    {
        int larger = 0;
        node *temp = head;
        while (temp != NULL)
        {
            if(temp->data>larger)
            larger=temp->data;
            temp = temp->next;
        }
        cout << "Largest of all nodes is: " << larger<<endl;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List is Empty!!";
            return;
        }
        node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    linked_list list;
    list.insert(11);
    list.insert(12);
    list.insert(13);
    list.insert(14);
    list.insert(15);
    list.display();
    cout << endl;
    // list.insert_front(10);
    list.sum();
    list.larger();
    
}