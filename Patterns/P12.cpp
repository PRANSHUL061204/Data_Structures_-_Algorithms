
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
   
    
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}