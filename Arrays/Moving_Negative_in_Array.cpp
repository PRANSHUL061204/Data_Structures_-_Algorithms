#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], index = 0;
    cout << "Enter 5 Elements of Array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            b[index] = a[i];
            index++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            b[index] = a[i];
            index++;
        }
    }
    cout << "Array after Performing Operation is:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
}