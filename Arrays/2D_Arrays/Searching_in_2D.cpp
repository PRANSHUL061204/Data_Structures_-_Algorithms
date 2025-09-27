#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, element, flag = 0;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter The Element to be Searched";
    cin >> element;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == element)
            {
                cout << "Element found at position " << i + 1 << "," << j + 1;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Element Not Found";
    }
    return 0;
}