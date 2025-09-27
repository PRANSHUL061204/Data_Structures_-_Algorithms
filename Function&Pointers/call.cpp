#include <iostream>
using namespace std;
void change(int x)
{
    x = x + 25;
    cout << "Value of X inside the function is: " << x << endl;
}
int main()
{
    int x = 10;
    change(x);
    cout << "value of x inside the Main Function is: " << x << endl;
    return 0;
}