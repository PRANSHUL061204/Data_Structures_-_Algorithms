#include <iostream>
using namespace std;
#define Size 5
class Stack
{
    int arr[Size];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top >= Size - 1)
        {
            cout << "\nStack OverFlow";
            return;
        }
        arr[++top] = x;
        cout << "\nElement " << x << " is Pushed into Stack";
    }
    void pop()
    {
        int val;
        if (top == -1){
            cout << "Stack Underflow";
            return;}
            else{
            val=arr[top];
            top--;
            cout<<endl<<val<<" is Popped out from the Stack";}
    }
    void peek(){
        cout<<"\nTop of the Stack is: "<<arr[top];
    }
    void display()
    {      cout<<"Stack Elements are:";
        while(top!=-1){
            cout<<endl<<arr[top];
            top--;
        }
    }
};
int main()
{
    Stack S;
    S.push(14);
    S.push(25);
    S.push(36);
    S.push(47);
    S.push(58);
    S.pop();
    S.peek();
    S.pop();
    S.peek();
    S.display();
}