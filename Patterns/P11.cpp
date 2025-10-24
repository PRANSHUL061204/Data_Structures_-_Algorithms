
#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << i + 1 << " ";
        }
        cout << endl;
    }

     cout<<endl<<endl;
     for (i = 0; i < 5; i++)
     {
        char ch='A'+ i;
         for (int j = 0; j <= i; j++)
         {

             cout << ch << " ";
         }
         cout << endl;
     }
}