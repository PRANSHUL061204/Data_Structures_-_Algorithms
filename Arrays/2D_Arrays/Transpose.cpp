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
    cout << " Transpose Array is: " << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            cout << a[j][i]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}