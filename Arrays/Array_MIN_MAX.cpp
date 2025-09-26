#include <iostream>
using namespace std;
int main()
{
    int a[5], i, min, max;
    cout << "Enter 5 Elements:";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    max = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    cout << "\nMinimum Element is:" << min << endl;
    cout << "\nMaximum Element is:" << max << endl;
}