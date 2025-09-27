#include <iostream>
using namespace std;
int main()
{
    char a = 'C';
    char *b = &a; // & is address of operator
    char **c;     // Pointer to pointer
    c = &b;
    cout << "The Address of b is: " << &b << endl;
    cout << "The Address of b is: " << c << endl;
    cout << "The Address Value at Pointer C is: " << *c << endl;
    cout << "The Value stored at pointer C is: " << **c << endl;

    return 0;
}