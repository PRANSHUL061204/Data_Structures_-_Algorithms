#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, sum = 0;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    cout << "Sum of Diagonal Elements is : " << sum;
    return 0;
}