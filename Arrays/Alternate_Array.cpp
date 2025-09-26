#include <iostream>
using namespace std;
void alter(int x[], int n)
{
    cout << "\n Traversing Alternate Array: ";
    for (int i = 0; i < n; i += 2)
    {
        cout << x[i] << ' ';
    }
}
int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter " << size << " Elements of Array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    alter(a, size);
}