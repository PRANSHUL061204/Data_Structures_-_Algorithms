#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int ar[] = {10, 20, 30, 40, 50};
    int size = sizeof(ar) / sizeof(ar[0]);
    display(ar, size);
    return 0;
}