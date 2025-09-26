#include <iostream>
using namespace std;
int main()
{
    int size, i, j, min, max, k, l;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the kth Value for min: ";
    cin >> k;
    cout << "Enter the kth Value for max: ";
    cin >> l;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << k << "th minimum element is: " << arr[k - 1] << endl;
    cout << l << "th maximum element is: " << arr[size - l] << endl;
}