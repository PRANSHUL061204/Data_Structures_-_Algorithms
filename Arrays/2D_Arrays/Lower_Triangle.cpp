#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j;
    cout << " Enter Array Elements  " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j]; // {1,2,3}   i=0,j=2
                            // {4,5,6}   i=1,j=1,2
                            // {7,8,9}   i=2,j=0,1,2
        }
    }
    cout << "Array Elements of Upper Triangle are: " << endl;
    int t = 3;
    for (i = 0; i < 3; i++)
    {
        t--;
        for (j = 0; j < 3; j++)
        {

            if (j >= t)
            {
                cout << a[i][j] << "  ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
    return 0;
}