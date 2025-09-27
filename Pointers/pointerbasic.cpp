#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    cout << "The Address of a is: " << &a << endl;
    cout << "The Address of a is: " << b << endl;
    cout << "The Value at address b is: " << *b << endl;
    
}