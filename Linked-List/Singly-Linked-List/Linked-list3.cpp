//Linked-list deletion from front and changing the position of Head

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class linked_list{
    private:
    node * head;
    public:
    linked_list(){
        head=NULL;
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
    // void insert_front(int val)
    // {
    //     node *newnode = new node(val);
    //     if (head == NULL)
    //     {
    //         head = newnode;
    //         return;
    //     }
    //     else
    //     {
    //         newnode->next = head;
    //         head = newnode;
    //     }
    // }
    void delete_front(){
        if(head==NULL)
        {
            cout<<"Linked List is Empty\n";
            return;
        }
        node *temp=head;
        head= head->next;
        temp->next=NULL;
        delete temp;
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
    //list.insert_front(10);
    list.delete_front();
    list.display();
}