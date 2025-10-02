#include <iostream>
using namespace std;
int rev(int x, int re = 0)
{
    if (x == 0)
        return re;
    int digit;
    digit = x % 10;
    re = re * 10 + digit;
    return rev(x / 10, re);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ret;
    ret = rev(n);
    cout << endl
         << "Number After Reversing is: " << ret;
}
