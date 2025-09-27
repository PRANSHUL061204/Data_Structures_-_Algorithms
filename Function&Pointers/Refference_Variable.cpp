#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    cout << "Value of a is: " << a << endl;
    cout << " Value of Reference variable b is: " << b << endl;
    cout << "Address of a is: " << &a << endl;
    cout << "Address of Reference variable b is: " << &b << endl;
    return 0;
}