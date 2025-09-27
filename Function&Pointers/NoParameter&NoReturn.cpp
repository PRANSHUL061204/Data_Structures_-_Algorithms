#include <iostream>
using namespace std;
void Display()
{
    cout << "I am inside Calling Function" << endl;
}
int main()
{
    cout << "I'm inside the Main Function " << endl;
    Display();
}