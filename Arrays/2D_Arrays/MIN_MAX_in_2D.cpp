#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, min, max;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    min = a[0][0];
    max = a[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    cout << "Minimum Element is : " << min << endl;
    cout << "Maximum Element is : " << max << endl;
    return 0;
}