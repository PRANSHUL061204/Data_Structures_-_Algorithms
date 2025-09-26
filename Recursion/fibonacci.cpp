#include <iostream>
using namespace std;
int fab(int a)
{
    if (a <= 0)
        return 1;
    else
        return (fab(a - 1) + fab(a - 2));
}
int main()
{
    int n;
    cout << "Enter the Value of n:\n";
    cin >> n;
    cout << "\nFibonacci Sequence is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fab(i) << "|";
    }
}