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
            cin >> a[i][j];
        }
    }
    cout << "Array Elements of Upper Triangle are: " << endl;
    int t = 3;
    for (i = 0; i < 3; i++)
    {
        t--;
        for (j = 0; j < 3; j++)
        {

            if (j<=t)
            {
                cout << a[i][j] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}