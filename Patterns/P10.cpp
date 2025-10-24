
#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {

            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        char ch = 'A' ;
        for (int j = 0; j <= i; j++)
        {

            cout << char(ch+j) << " ";
            
        }
        cout << endl;
    }
}