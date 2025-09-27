#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[r][c], b[r][c], s[r][c], i, j;
    cout << " Enter 1st Array Elements  " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " Enter 2nd Array Elements  " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Sum of Matrices are: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            cout << s[i][j] << "  ";
        }

        cout << endl;
    }
    return 0;
}