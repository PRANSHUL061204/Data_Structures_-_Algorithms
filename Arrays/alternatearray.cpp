#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int altArr[n];
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            altArr[i] = arr[left++];
        }
        else
        {
            altArr[i] = arr[right--];
        }
    }

    cout << "Array in alternate order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << altArr[i] << " ";
    }
    cout << endl;

    return 0;
}