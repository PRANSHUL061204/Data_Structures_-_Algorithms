#include <iostream>
using namespace std;
void show()
{
    int x = 1;
    cout << "Value of x is: " << x << endl;
    x++;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        show();
    }
    return 0;
}