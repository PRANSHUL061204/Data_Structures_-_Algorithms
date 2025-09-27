#include <iostream>
using namespace std;
int main()
{

    // Transpose of a 2d Array

    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[r][c], i, j, sum = 0;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " Result is: " << endl;

    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum += a[i][j];
            cout << a[i][j] << "|";
        }
        cout << "Sum of " << i + 1 << " row is: " << sum << endl;
    }

    return 0;
}