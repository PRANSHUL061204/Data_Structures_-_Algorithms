#include <iostream>
using namespace std;
int i=1;

/* Display All Number between !-100 using recursion
Display Sum of All Natural number upto 10 using Recursion
Find factorial of 5
Sum of Elements in Array using recursion*/
void display()
{
    
    if(i%2==0)
    {
        cout<<i<<" ";
        display();
        i++;
        if(i>100)
    {
        return;
    }   
 }
    
}
int main()
{
    display();
    return 0;
}