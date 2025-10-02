#include <iostream>
using namespace std;

int main()
{
    char ar[] = "DLROW TTAJ";
    int n = sizeof(ar) / sizeof(char);
    cout << "String Before Reversing is: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
    }
    cout << "String After Reversal is: " << endl;
    for (int i = n; i >= 0; i--)
        cout << ar[i];
}