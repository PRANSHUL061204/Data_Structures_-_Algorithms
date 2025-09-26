#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], unionArr[10], intersection[5];
    int i, j, k = 0, l = 0;
    bool found;

    cout << "Enter 5 Elements of Array A: ";
    for (i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter 5 Elements of Array B: ";
    for (i = 0; i < 5; i++)
        cin >> b[i];

    // Add all elements of A to union
    for (i = 0; i < 5; i++)
        unionArr[k++] = a[i];

    // Add elements of B to union if not already present
    for (i = 0; i < 5; i++)
    {
        found = false;
        for (j = 0; j < 5; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            unionArr[k++] = b[i];
    }

    // Find intersection
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                // Check if already added to intersection
                bool added = false;
                for (int m = 0; m < l; m++)
                {
                    if (intersection[m] == a[i])
                    {
                        added = true;
                        break;
                    }
                }
                if (!added)
                    intersection[l++] = a[i];
            }
        }
    }

    cout << "Union is: ";
    for (i = 0; i < k; i++)
        cout << unionArr[i] << " ";

    cout << "\nIntersection is: ";
    for (i = 0; i < l; i++)
        cout << intersection[i] << " ";

    return 0;
}
