#include <iostream>
using namespace std;
int main()
{

    // Dia

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
    cout << " Diagonal Array Elements are: " << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (i == j)
            {
                cout << a[i][j] << "||";
                sum += a[i][j];
            }
        }

    }
    cout << "Sum of diagonal Elements are:" << sum << endl;
    return 0;
}