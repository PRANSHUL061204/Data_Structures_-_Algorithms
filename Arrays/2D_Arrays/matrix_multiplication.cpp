#include <iostream>
using namespace std;
int main()
{
    int r, c,k,l;
    cout << "Enter number of rows and columns for 1st Matrix: ";
    cin >> r >> c;
    cout << "Enter number of rows and columns for 2nd Matrix: ";
    cin >> k>> l;
    int a[r][c], b[k][l], i, j;
    cout << " Enter 1st Array Elements  " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " Enter 2nd Array Elements  " << endl;
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < l; j++)
        {
            cin >> b[k][l];
        }
    }
    int s[r][l];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < l; j++)
        {
            for(int m=0;m<c;m++)
             {
                 s[i][j] =  a[i][m] * b[m][j];
             }
         }
    }





    cout << "Product of Matrices are: " << endl;
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