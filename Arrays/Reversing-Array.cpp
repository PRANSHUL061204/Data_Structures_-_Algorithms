#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 4, 6, 7};
    int i = 0;
    int j = sizeof(arr) / sizeof(int) - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k = 0; k < 5; k++)
        cout << arr[k] << " ";
}