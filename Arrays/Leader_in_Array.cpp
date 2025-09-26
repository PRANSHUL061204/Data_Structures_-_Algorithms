#include <iostream>
using namespace std;
void leader(int x[], int n)
{
    int i, j,k, count = 0;
    int res[n];

    for (i = 0; i < n; i++)
    {
        bool lead = true;
        for (j = i + 1; j < n; j++)
        {
            if (x[i] < x[j])
            {
                lead = false;
                break;
            }
           
        }
        if (lead)
        {
            res[count] = x[i];
            count++;
        }
    }
     cout << "Result is:\n";
        for (k = 0; k < count; k++)
            cout << res[k] << "|";
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
    leader(a, size);
}