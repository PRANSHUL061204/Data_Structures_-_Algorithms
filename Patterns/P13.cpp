
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        for (int j =1;j<=6-i; j++)
        {

            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    
    for (i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 6 - i; j++)
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}