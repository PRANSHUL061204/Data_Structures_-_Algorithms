#include <iostream>
using namespace std;
void show()
{
    static int x = 1;
    cout << "Value of x is: " << x << endl;
    x++;
}
/* Static Variable in CPP
===============================
In a Function, when a Variable is decalred as Static, 
space or it gets allocated for the lifetime of a program.
Even if the function is called multiple times,space for the static 
variable is allocated only once and the value of  the variable 
in the previous call gets carried through the next function Call.
*/
int main()
{
    for (int i = 0; i < 5; i++)
    {
        show();
    }
    return 0;
}