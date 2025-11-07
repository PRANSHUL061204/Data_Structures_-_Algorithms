//          1
//        1 2 
//      1 2 3 
//    1 2 3 4 
//  1 2 3 4 5

//          1 
//        2 1  
//      3 2 1 
//    4 3 2 1
//  5 4 3 2 1
#include <iostream>
    using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
