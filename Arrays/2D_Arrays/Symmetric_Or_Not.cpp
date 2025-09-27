#include <iostream>
using namespace std;
int main()
{

    // Transpose of a 2d Array

    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[r][c], i, j, s[r][c], flag=0;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[j][i];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (s[i][j] == a[i][j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "Symmetric Matrix";
    }
    else
    {
        cout << "Not a Symmetric Matrix";
    }

    return 0;
}