#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0, avg;
    cout << "Enter Size of Array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter " << size << " Elements of Array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\n Sum of the Array is: ";
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << sum;
    avg = sum / size;
    cout << "\n Average of the Array is: " << avg;
    return 0;
}