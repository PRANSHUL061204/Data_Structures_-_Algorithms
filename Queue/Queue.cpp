#include <iostream>
using namespace std;
const int size = 6;
class queue
{
    int arr[size];
    int front, rear;

public:
    queue()
    {
        front = 0;
        rear = 0;
    }
    void insert(int val)
    {
        if (rear == size)
            cout << "\nInsertion Not Possible\n";
        else
        {
            arr[rear] = val;
            rear++;
        }
    }
    void delte()
    {
        if (front == rear)
            cout << "\n Queue is Empty\n";
        else
        {
            cout << "\n Element " << arr[front] << "  is deleted from Queue";
            front++;
        }
    }
    void display()
    {
        cout << "\n Elements in the Queue are:";

        while (front != rear)
        {
            cout << arr[front++] << " ";
        }
    }
};
int main()
{
    queue q;
    q.insert(12);
    q.insert(24);
    q.insert(36);
    q.insert(48);
    q.insert(60);
    q.delte();
    q.delte();
    q.display();
}
