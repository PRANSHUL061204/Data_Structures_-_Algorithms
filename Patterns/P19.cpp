#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 5; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
            cout << " *";

        for (col = 1; col <= 10 - (2 * row); col++)
            cout << "  ";
        for (col = 1; col <= row; col++)
            cout << " *";
        cout << endl;
    }
    for (row = 1; row <= 5; row++)
    {

        for (col = 1; col <= row; col++)
            cout << " *";

        for (col = 1; col <= 10 - (2 * row); col++)
            cout << "  ";
        for (col = 1; col <= row; col++)
            cout << " *";
        cout << endl;
    }
}