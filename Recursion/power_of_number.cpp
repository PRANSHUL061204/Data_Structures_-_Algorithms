#include <iostream>
using namespace std;
int pow(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * pow(x, n - 1);
}
int main()
{
    int x, p;
    cout << "\nEnter the Number & Power : ";
    cin >> x >> p;
    cout << "\n"
         << x << " is raised to the power " << p << " is :" << pow(x, p);
}