#include <iostream>
using namespace std;
int i = 1;
void display()
{
    if (i <= 10)
    {
        cout << "Hello!!" << "  ";
        i++;
        display();
    }
    else
    {
        return;
    }
}
int main()
{
    display();
    return 0;
}