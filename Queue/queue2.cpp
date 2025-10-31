#include <iostream>
using namespace std;

// Using const int is often preferred over #define for scope and type safety
const int SIZE = 6;

class Queue
{
private:
    int arr[SIZE];
    // 'front' points to the first element to be deleted (or where a value was just deleted)
    // 'rear' points to the next available position for insertion
    int front, rear;

public:
    // Initialize an empty queue. front and rear are both 0.
    Queue()
    {
        front = 0;
        rear = 0;
    }

    void insert(int val)
    {
        // Correct overflow check: If 'rear' has reached the array limit
        if (rear == SIZE)
        {
            cout << "\nQueue is Full. Insertion Not Possible.\n";
        }
        else
        {
            // Insert the value at the current rear position, then increment rear
            arr[rear] = val;
            rear++;
            cout << "\nInserted " << val << " at position " << rear - 1;
        }
    }

    void delte()
    {
        // Correct underflow check: If 'front' equals 'rear', the queue is empty
        if (front == rear)
        {
            cout << "\nQueue is Empty. Deletion Not Possible.\n";
        }
        else
        {
            // Retrieve the element at the current front position
            // Then increment front to move to the next element
            cout << "\nElement " << arr[front] << " is deleted from Queue.";
            front++;
        }
    }
};

int main()
{
    Queue q;

    // Insertions
    q.insert(12); // rear=1
    q.insert(24); // rear=2
    q.insert(36); // rear=3
    q.insert(48); // rear=4
    q.insert(60); // rear=5

    // Deletions (front moves forward)
    q.delte(); // Deletes 12 (front=1)
    q.delte(); // Deletes 24 (front=2)

    // Test for a full queue (Optional)
    q.insert(72); // rear=6 (Queue is Full, will print error with the correct size check)
    
    return 0;
}