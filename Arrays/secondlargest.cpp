#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) // {3,12,9,4,6}
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int second_max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i]) //  3<12 12<9 12<4 12<6
        {
            second_max = max; // second_max=3
            max = arr[i]; // max=12
        }
        else if (arr[i] > second_max)
        {
            second_max = arr[i]; // second_max=9
        }
    }

    cout << "Second largest element: " << second_max << endl;

    return 0;
}